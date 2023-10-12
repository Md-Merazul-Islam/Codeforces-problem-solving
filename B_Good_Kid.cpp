

#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        a[0] += 1;
        long long sum = 1;
        for (int i = 0; i < n; i++)
        {
            sum *= a[i];
        }
        cout << sum << endl;
    }
    return 0;
}