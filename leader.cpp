#include<iostream>
using namespace std;

void leader(int arr[],int n)
{

for(int i=0;i<n;i++)
{
   bool flag = false;
    for(int j=i+1;j<n;j++)
    {
if(arr[i]<arr[j])
{
    flag = true;
    break;
}
}
if(flag == false)
cout<<endl<<arr[i]<<" ";
}



}


int main()
{
    int arr[] = {10, 70, 50, 30};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "original array = ";
    for (int x : arr)
        cout << x << " ";

        cout<<endl<<"leader";

    leader(arr, n);

    // cout << endl
    //      << "new array = ";
    // for (int x : arr)
    //     cout << x << " ";
}