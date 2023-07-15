#include<iostream>
using namespace std;

void insertt(int arr[],int s,int e,int en)
{

int ind=en-1;
for(int j=s-1;j>=ind;j--)
{
arr[j+1]=arr[j];
}

arr[ind]=e;

}


int main()
{
    int arr[5]={3,5,9,10},e,en;

for(int i:arr)
{
    cout<<i<<" ";
}
    cout<<endl<<"Enter element= ";
    cin>>e;
    cout<<endl<<"Enter element position= ";
    cin>>en;

   insertt(arr,4,e,en);
    
    for(int i:arr)
{
    cout<<i<<" ";
}
}