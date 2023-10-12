#include <bits/stdc++.h>

using namespace std;

int search(string pat, string txt)
{

    string s = "";
    int n = txt.size();
    int k = pat.size();
    int i = 0;
    int j = 0;
    int count = 0;
    sort(pat.begin(), pat.end());
    while (j < n)
    {

        s += txt[j];


        if (j - i + 1 < k)
        {
            j++;
        }

        else if (j - i + 1 == k)
        {

            string temp = s;
            sort(temp.begin(), temp.end());
            if (temp == pat)
            {
                count++;
            }
            // size_t index = i;
            s.erase(i, 1);

            i++;
            j++;
        }
    }

    return count;
}



int main()
{
    string a, b;
    cin >> a >> b;
    
    int cnt = search(a,b);
    cout << cnt << endl;
    return 0;
}