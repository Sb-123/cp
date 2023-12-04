#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }

        if (cnt0 > cnt1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (cnt0 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}