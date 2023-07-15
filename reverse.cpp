#include<iostream>
#include<algorithm>
using namespace std;

void reversee(int arr[],int n)
{
int low=0;
int high=n-1;

while(low<high)
{
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;

    low++;
    high--;
}
}
int main()
{
    int arr[]={1,3,57,2,41,23,45};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"array = ";
    for(int x: arr)
    cout<<x<<" ";

    reverse(arr,arr+n);

   cout<<"reverse array = ";
     for(int x: arr)
    cout<<x<<" ";
}