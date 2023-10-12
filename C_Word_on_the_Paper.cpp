#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c[8][8];

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)

            {
                cin >> c[i][j];
            }
        }
        string st = "";
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)

            {
                if (c[i][j] != '.')
                {
                    st += c[i][j];
                }
            }
        }
        cout << st << endl;
    }
    return 0;
}