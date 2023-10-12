// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int cnt = 0;
//         for (int i = 0; i < 3; i++)
//         {
//             if (s[i] == 'y' || s[i] == 'Y' || s[i] == 'E' || s[i] == 'e' || s[i] == 's' || s[i] == 'S')
//             {
//                 cnt++;
//             }
//         }
//         if (cnt == 3)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    // cin.ignore();

    while (t--)
    {
        string s;
        cin >> s;
        // sort(s.begin(), s.end());
        string x = "yes";
        // sort(x.begin(), x.end());

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (s ==x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
