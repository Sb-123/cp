#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
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