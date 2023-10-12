
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long max_sum = k * (k + 1) / 2;
        long long min_sum = (2 * n - k + 1)*k / 2;
        if (min_sum < x || max_sum > x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

        
    }

    return 0;
} 
