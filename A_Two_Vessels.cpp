
#include <bits/stdc++.h>
#define dd double
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        dd cnt = 0;
        dd a, b, c;
        cin >> a >> b >> c;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a + b < c)
        {
            cout << 1 << endl;
        }
        else
        {
            dd avrg = (a + b) / 2.0;
            dd ans = avrg - (dd)min(a, b);
            dd rslt = ans / c;
            cout << ceil(rslt) << endl;
        }
    }

    return 0;
}