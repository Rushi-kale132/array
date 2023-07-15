#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int arr[b];

        for (int i = 0; i < b; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + b);

        if (arr[b - 1] == 1)
        {
            cout << "0";
            exit;
        }

        cout << endl;
        int flag = 0;

        while (arr[0] != 1)
        {
            for (int i = 0; i < b; i++)
            {
                arr[i] = arr[i] - 1;
            }
            flag++;
        }
        cout << flag << endl;
    }

    return 0;
}