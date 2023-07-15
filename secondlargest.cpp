#include<iostream>
#include<algorithm>
using namespace std;

int largee(int arr[],int n)
{
// int ele=0;
// int second=0;
// for(int i=1;i<n;i++)
// {
//     if(arr[i]>arr[ele])
//     {
//         second=arr[ele];
//         ele=arr[i];
//     }
// }
// return second;

sort(arr,arr+n);
 return arr[n-2];



}

int main()
{
    int arr[5]={3,95,9,10,66};

    cout<<largee(arr,5);
}