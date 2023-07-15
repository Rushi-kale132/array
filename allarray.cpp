#include <iostream>
using namespace std;

int searchh(int arr[], int n)
{
    int s;
    cout << "enter search element = ";
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            return i + 1;
        }
    }
    return -1;
}

void addd(int arr[], int n)
{
    int a, p;
    cout << "enter add element = ";
    cin >> a;

    cout << "enter position of element = ";
    cin >> p;
    int index = p - 1;
    for (int i = n-1 ; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = a;
}

void deletet(int arr[], int n)
{
   int x;
    cout << "enter delete element = ";
    cin >> x; 
int i=0;
for(i=0;i<n;i++)
{
    if(arr[i]==x)
    {
        break;
    }
}
    for(int j=i;j<n-1;j++)
    {
     arr[j]=arr[j+1];
    }
    arr[n-1]=0;

}

int main()
{
    int arr[] = {2, 6, 9, 1, 4}, c;
    int n = sizeof(arr) / sizeof(arr[1]);

    cout << "your array = ";
    for (int x : arr)
        cout << x << " ";

    cout << endl
         << "1 for search \n2 for add element \n3 for remove element \n Enter choice = ";
    cin >> c;
    switch (c)
    {
    case 1:

        cout << searchh(arr, n);
        break;
    case 2:

        addd(arr, n);
        for (int x : arr)
            cout << x << " ";
        break;

        case 3:

        deletet(arr, n);
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
       
        break;
    default:
        break;
    }
}