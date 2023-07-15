#include<iostream>
using namespace std;

int ssearch(int arr[],int s,int e)
{
    for(int i=0;i<s;i++)
    {
        if(arr[i]==e)
        {
             return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={3,5,9,10},n;

for(int i:arr)
{
    cout<<i<<" ";
}
    cout<<endl<<"Enter element= ";
    cin>>n;

   cout<<ssearch(arr,4,n);
    
}