
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        int k;
        cin >> k;
        long long int sum = 0;
        vector<int> v(sz);
        v.clear();
        int even = sz / 2;
        int odd = sz - even;
        int i = 0;
        while (even--)
        {
            v[i] = 1;
            i++;
        }
        while (odd--)
        {
            v[i] = 2;
            i++;
        }
        for (int i = 0; i < sz; i++)
        {
            sum += v[i];
        }
        if (k >= 0 && sum == k)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            sum = 0;
            int d = k / 2;
            int mod = k % 2;
            for (int i = 0; i < d; i++)
            {
                int x = v[i] + 2;
                v[i] = x;
                sum += v[i];
            }
            for (int i = 0; i < mod; i++)
            {
                int x = v[i] + 2;
                v[i] = x;
                sum += v[i];
            }
            if (sum == k)
            {
                for (int i = 0; i < v.size(); i++)
                {
                    cout << v[i] << " ";
                }
            }
        }
    }
    return 0;
}


