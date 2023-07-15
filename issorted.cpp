#include<iostream>
#include<algorithm>
using namespace std;

bool issoted(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
  return false;
        }
    }
  return true;
}
int main()
{
    int arr[4]={3,9,10,66};

    cout<<issoted(arr,4);
}