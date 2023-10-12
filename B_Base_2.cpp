#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> A(64);

    // Read the input sequence
    for (int i = 0; i < 64; i++) {
        cin >> A[i];
    }

    long long result = 0;

    // Calculate the sum of A[i]^(i+20) for each i from 0 to 63
    for (int i = 0; i < 64; i++) {
        result += A[i] * pow(2, i + 20);
    }

    // Print the result
    cout << result << endl;

    return 0;
}
