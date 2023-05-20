#include <bits/stdc++.h>
#include <set>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<string> st;
    for (int i = 0; i < n; i++)
    {
        string tem = s.substr(i, 2);
        st.insert(tem);
    }

    cout << st.size() - 1 << "\n";
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