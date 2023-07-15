#include<iostream>
using namespace std;

int summ(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr[]={10,60};
    int n = sizeof(arr)/sizeof(arr[n]);
    int sum = summ(arr,n);
    cout<<sum;
}