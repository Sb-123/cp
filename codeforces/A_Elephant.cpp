#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int x;
    cin >> x;
    int cnt = 0;

    while (x > 0)
    {
        x -= 5;
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}