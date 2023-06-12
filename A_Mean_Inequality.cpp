#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    int a[2 * n];

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 2 * n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << a[2 * n - 1 - i] << " ";
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