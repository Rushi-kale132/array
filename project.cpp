#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d1, d2, d3;
        d1 = a * b;
        d2 = b * c;
        d3 = a * c;

        if (d1 % c == 0)
        {
            cout << d1 << " " << c << endl;
        }
        else if (d2 % a == 0)
        {
            cout << d2 << a << " " << endl;
        }
        else if (d3 % b == 0)
        {
            cout << d3 << b << " " << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}