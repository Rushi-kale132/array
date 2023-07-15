#include<iostream>
using namespace std;

int avgg(int arr[],int n)
{
    int avg=0;
    for(int i=0;i<n;i++)
    {
        avg=avg+arr[i];
    }
    return avg/n;
}

int main()
{
    int arr[]={10,60};
    int n = sizeof(arr)/sizeof(arr[n]);
    int avg = avgg(arr,n);
    cout<<avg;
}