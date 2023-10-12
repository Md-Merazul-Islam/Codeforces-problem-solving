#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int mx = 0;
        int dom_element = -1;
        for (auto val : mp)
        {
            if (val.second > mx)
            {
                mx = val.second;
                dom_element = val.first;
            }
        }
        bool flag = true;
        for (auto val : a)
        {
            if (val != dom_element & mp[val] >= mx)
            {
                flag =false;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
