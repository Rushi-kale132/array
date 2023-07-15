#include<iostream>
using namespace std;

int largee(int arr[], int n)
{
    int ele = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > ele)
        {
            ele = arr[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == ele)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {3, 95, 9, 10, 66};

    cout << largee(arr, 5);
}
