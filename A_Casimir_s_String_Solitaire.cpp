#include <bits/stdc++.h>
using namespace std;

void sol()
{
    string s;
    cin >> s;
    int cnt = 0;

    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'B')
        {
            cnt++;
        }
    }
    if (len % 2 == 0 and cnt == len / 2)
    {
        cout << "YES" << endl;
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