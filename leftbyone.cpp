#include<iostream>
using namespace std;

void leftone(int arr[], int n)
{

    int temp = arr[0];

    for(int i=1;i<n;i++)
    {
        swap(arr[i],arr[i-1]);
    }

    arr[n-1]=temp;

}

int main()
{
    int arr[] = {10, 4, 5, 30};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "original array = ";
    for (int x : arr)
        cout << x << " ";

    leftone(arr, n);

    cout << endl
         << "new array = ";
    for (int x : arr)
        cout << x << " ";
}