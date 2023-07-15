#include<iostream>
using namespace std;

void delett(int arr[],int n,int x)
{
    int i=0;
for(i=0;i<n;i++)
{
    if(arr[i]==x)
    {
        break;
    }
    for(int j=i;j<n-1;j++)
    {
     arr[j]=arr[j+1];
    }
}

// int i = 0;

// 	for(i = 0; i < n; i++)
// 	{
// 		if(arr[i] == x)
// 			break;
// 	}
// 	for(int j = i; j < n - 1; j++)
// 	{
// 		arr[j] = arr[j + 1];
// 	}
}


int main()
{
    int arr[5]={3,5,9,10,6},ele;

for(int i:arr)
{
    cout<<i<<" ";
}
    cout<<endl<<"Enter element= ";
    cin>>ele;

   delett(arr,5,ele);
    
    for(int i:arr)
{
    cout<<i<<" ";
}
}