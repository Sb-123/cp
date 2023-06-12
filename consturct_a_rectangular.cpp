#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b == c || b + c == a || c + a == b || a == b && c % 2 == 0 || b == c && a % 2 == 0 || c == a && b % 2 == 0)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}