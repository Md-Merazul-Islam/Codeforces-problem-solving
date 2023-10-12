#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int x, y, z;
        bool possible = false;

        for (x = 1; x <= n; x++)
        {
            for (y = x + 1; y <= n; y++)
            {
                z = n - x - y;
                if (z > 0 && (x % 3 != 0) && (y % 3 != 0) && (z % 3 != 0) && (x != y) && (x != z) && (y != z))
                {
                    possible = true;
                    break;
                }
            }
            if (possible)
            {
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
