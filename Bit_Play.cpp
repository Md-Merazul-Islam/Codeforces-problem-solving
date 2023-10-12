#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        int maxScore = 0;

        for (int i = 0; i < N; i++) {
            int left = i;
            while (left > 0 && A[left - 1] == A[i]) {
                left--;
            }

            int right = i;
            while (right < N - 1 && A[right + 1] == A[i]) {
                right++;
            }

            int score = A[i] * (right - left + 1);
            maxScore = max(maxScore, score);
        }

        cout << maxScore << endl;
    }

    return 0;
}
