// #include <bits/stdc++.h>

// using namespace std;

// char findCharInSequence(string s1, int pos)
// {
//     vector<string> s;
//     s.push_back(s1);
//     string result;

//     while (!s.empty())
//     {
//         sort(s.begin(), s.end());
//         string minStr = s[0];
//         s.erase(s.begin());

//         if (result.size() + minStr.size() >= pos)
//         {
//             return minStr[pos - result.size() - 1];
//         }

//         result += minStr;

//         for (int i = 0; i < minStr.size(); i++)
//         {
//             string newStr = minStr.substr(0, i) + minStr.substr(i + 1);
//             if (find(s.begin(), s.end(), newStr) == s.end())
//             {
//                 s.push_back(newStr);
//             }
//         }
//     }
//     return '\0';
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s1;
//         cin >> s1;
//         int pos;
//         cin >> pos;
//         char result = findCharInSequence(s1, pos);
//         cout << result;
//     }

//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s1;
        cin >> s1;
        
        long long pos;
        cin >> pos;
        
        long long len = s1.length();
        long long n = len;
        string result;
        
        for (int i = 0; i < len; i++) {
            while (!result.empty() && (n - result.length() + 1) * (result.length() + 1) < pos) {
                result.pop_back();
            }
            
            if ((n - result.length() + 1) * (result.length() + 1) >= pos) {
                int idx = (n - result.length() + 1) * (result.length() + 1) - pos;
                result += s1[i + idx];
            }
        }
        
        cout << result[pos - 1] << endl;
    }
    
    return 0;
}
