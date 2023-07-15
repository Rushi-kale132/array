// #include<iostream>
// using namespace std;

// int removiedupli(int arr[],int n)
// {
//     int temp[n];
//     temp[0]=arr[0];

//     int res =1;

//     for(int i=1;i<n; i++)
//     {
//         if(temp[res-1] != arr[i])
//         {
//             temp[res]=arr[i];
//             res++;
//         }
//     }
//     for(int i=0;i<res;i++)
//     {
//        arr[i]=temp[i];
//     }

//     return res;
// }

// int main()
// {
//     int arr[]={10,20,20,30,40,50,30,70,90,70};
//     int n=sizeof(arr)/sizeof(arr[0]);

// cout<<"Your array = ";
//     for(int x: arr)
//      cout<<x<<" ";

//     int d = removiedupli(arr,n);
// cout<<endl<<"unique  element = "<<d-1;
//     cout<<endl<<"Remove duplicate element = ";
//     for(int x: arr)
//      cout<<x<<" ";
// }

#include <iostream>
#include <cmath>
using namespace std;

 int remDups(int arr[], int n)
{
	int temp[n];

	temp[0] = arr[0];

	int res = 1;

	for(int i = 1; i < n; i++)
	{
		if(temp[res - 1] != arr[i])
		{
			temp[res] = arr[i];
			res++;
		}
	}

	for(int i = 0; i < res; i++)
	{
		arr[i] = temp[i];
	}

	return res;
}
    
int main() {
	
      int arr[] = {10, 20, 20, 30, 30, 30}, n = 6;

      cout<<"Before Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       n = remDups(arr, n);

       cout<<"After Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}