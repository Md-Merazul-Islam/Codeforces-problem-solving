#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int mx = 0;
        for (auto val : mp)
        {
            // cout << val.first << " : " << val.second << endl;
            mx = max(mx, val.second);
        }
        cout <<n- mx << endl;

        // cout << endl;
    }
    return 0;
}
