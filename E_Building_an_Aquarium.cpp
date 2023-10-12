#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << a[0] + x << endl;
            continue;
        }
        ll l = 0;
        ll r = 1e9 + 5;

        while (l < r)
        {
            ll mid = (l + r) / 2;
            ll s = 0;

            for (int i = 0; i < n; i++)
            {
                s += max(0LL, mid - a[i]);
            }

            if (s <= x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }

        cout << l - 1 << endl;
    }

    return 0;
}
