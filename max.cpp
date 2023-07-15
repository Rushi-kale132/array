#include<iostream>
using namespace std;

int amax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[]={10,60,500,10,90};
    int n = sizeof(arr)/sizeof(arr[n]);
    int amx = amax(arr,n);
    cout<<amx;
}