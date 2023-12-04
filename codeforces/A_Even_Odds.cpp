#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n, k;
    cin >> n >> k;
    double val = ceil(n / 2.0);
    // cout << val << endl;

    if (k <= val)
        cout << 2 * (k - 1) + 1 << "\n";
    else
    {

        cout << 2 * (k - val) << endl;
    }

    return 0;
}