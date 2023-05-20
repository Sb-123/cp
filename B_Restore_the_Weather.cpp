#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void sol()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n);

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
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
