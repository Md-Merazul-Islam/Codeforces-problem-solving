#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        char s[10][10];

        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {

                cin >> s[i][j];
                int x = i, y = j;
                if (i > 4)
                    x = 9 - i;
                if (j > 4)
                    y = 9 - j;
                if (s[i][j] == 'X')
                    sum += min(x, y) + 1;
            }
        }
        cout << sum << endl;
    }

    return 0;
}