#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
            cnt1++;
        else
            cnt2++;
    }

    if ((cnt1 % 2 == 0 and cnt2 % 2 == 0) or (cnt2 % 2 == 1 and cnt1 > 1 and cnt1 % 2 == 0))
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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