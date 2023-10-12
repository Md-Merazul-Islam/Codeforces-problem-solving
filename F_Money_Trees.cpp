#include <iostream>
#include <vector>

using namespace std;

bool isDivisible(int a, int b) {
    return (b % a == 0);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> fruits(n);
        vector<int> heights(n);

        for (int i = 0; i < n; i++) {
            cin >> fruits[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        int l = 0; // Left pointer
        int r = 0; // Right pointer
        int maxLength = 0;
        long long currentFruits = 0;
        int currentHeight = heights[0];

        while (r < n) {
            if (isDivisible(currentHeight, heights[r]) && currentFruits + fruits[r] <= k) {
                // Extend the subarray to the right
                currentFruits += fruits[r];
                r++;
                maxLength = max(maxLength, r - l);
            } else {
                // Move the left pointer to the right
                currentFruits -= fruits[l];
                l++;
                if (l > r) {
                    // If left pointer crosses right pointer, move right pointer
                    r = l;
                    if (r < n) {
                        currentHeight = heights[r];
                    }
                }
            }
        }

        cout << maxLength << endl;
    }

    return 0;
}
