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
        int val = 3;
        for (int i = 1; i <= n; i++)
        {
            cout << val << " ";
            val += 2;
        }
        cout << endl;
    }
    return 0;
}