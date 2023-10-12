#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        string S, T;
        cin >> S >> T;

        int count = 0;

        for (int i = 0; i < N; i++)
        {
            if (S[i] != T[i])
            {
                count++;
                i++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
