#include <iostream>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    int a[n];

    if (n % 2 == 0)
    {
        int ev = 2;
        int od = 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                cout << od << " ";
                od += 2;
            }
            else
            {
                cout << ev << " ";
                ev += 2;
            }
        }
        cout << "\n";
    }
    else
    {
        if (n == 3)
        {
            cout << 3 << " " << 1 << " " << 2 << " ";
        }
        if (n > 3)
        {
            cout << "3"
                 << " "
                 << "1"
                 << " "
                 << "2"
                 << " ";
            int od = 5;
            int ev = 4;
            for (int i = 3; i < n; i++)
            {
                if (i % 2)
                {
                    cout << od << " ";
                    od += 2;
                }
                else
                {
                    cout << ev << " ";
                    ev += 2;
                }
            }
        }
        cout << "\n";
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