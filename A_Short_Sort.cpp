#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        string x;
        cin >> x;
        string st = "abc";
     
        if (x == st)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (st[i] != x[i])
                {
                    cnt++;
                }
            }
            if (cnt > 2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
