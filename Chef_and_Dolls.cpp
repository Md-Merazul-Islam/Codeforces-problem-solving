#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int cnt = 0;
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int dol;
            cin >> dol;
            mp[dol]++;
        }
        for (auto i = mp.begin(); i!= mp.end() ; i++)
        {
            if(i->second %2 !=0)
            {
                cout<<i->first<<endl;
                break;
            }

        }
    }
    return 0;
}