//  navvie soln

//  #include<iostream>
// using namespace std;

// void zeroleft(int arr[],int n)
// {

// for(int i=0;i<n;i++)
// {
//     if(arr[i]==0)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j] != 0)
//             {
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }

// }

// int main()
// {
//     int arr[] = { 10,4,0,5,0,30};

//     int n=sizeof(arr)/sizeof(arr[0]);
// cout<<"original array = ";
// for(int x:arr)
// cout<<x<<" ";

// zeroleft(arr,n);

// cout<<endl<<"new array = ";
// for(int x:arr)
// cout<<x<<" ";
// }



#include<iostream>
using namespace std;

void zeroleft(int arr[],int n)
{
    int countt=0;
for(int i=0;i<n;i++)
{
    if(arr[i] != 0)
    {
        swap(arr[i],arr[countt]);
        countt++;
    }
}
}

int main()
{
    int arr[] = { 10,4,0,5,0,30};

    int n=sizeof(arr)/sizeof(arr[0]);
cout<<"original array = ";
for(int x:arr)
cout<<x<<" ";

zeroleft(arr,n);

cout<<endl<<"new array = ";
for(int x:arr)
cout<<x<<" ";
}