#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pi> v;
        for (int i = 0; i < n; i++)
        {
            int words, quality;
            cin >> words >> quality;
            v.push_back({words, quality});
        }
        int mx = 0;
        int response = 0;
        for (int i = 0; i < n; i++)
        {
            int word = v[i].first;
            int quality = v[i].second;
            if (word <= 10 && quality >= mx)
            {
                mx = quality;
                response = i + 1;
            }
        }
        cout << response << endl;
    }

    return 0;
}