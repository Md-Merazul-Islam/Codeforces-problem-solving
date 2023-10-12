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
        int h = 0;
        while ((h * (h + 1)) / 2 <= n)
        {
            h++;
        }
        cout << h-1 << endl;
    }
    return 0;
}