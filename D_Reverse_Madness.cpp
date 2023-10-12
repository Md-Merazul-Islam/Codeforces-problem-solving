#include <bits/stdc++.h>
#define ll long long
using namespace std;

void reverse_st(string &st, ll a, ll b)
{
    while (a < b)
    {
        swap(st[a], st[b]);
        a++;
        b--;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        vector<ll> l(k), r(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> l[i];
        }
        for (ll i = 0; i < k; i++)
        {
            cin >> r[i];
        }
        ll q;
        cin >> q;
        vector<ll> mode(n + 2, 0);

        while (q--)
        {
            ll x;
            cin >> x;
            ll indx = 0;
            mode[l[x - 1]]++;
            mode[r[x - 1] + 1]++;
            for (ll i = 1; i <= n; i++)
            {
                mode[i] += mode[i - 1];
            }

            for (int i = 1; i <= n; i++)
            {
                if (mode[i] % 2 != 0)
                {
                    reverse_st(st, i - 1, i - 1);
                }
            }
        }
        cout << st << endl;
    }

    return 0;
}