#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int Mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        ll odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        long long ans = 0;
        if (k == 0)
        {
            ans = odd * (odd - 1) / 2 + even * (even - 1) / 2;
        }
        else
        {
            ans = odd * (odd - 1) / 2;
            ans += even * (even - 1) / 2;
        }
        cout << ans % Mod << endl;
    }
    return 0;
}