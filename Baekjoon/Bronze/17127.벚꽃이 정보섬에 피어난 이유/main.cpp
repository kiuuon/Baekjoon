#include <iostream>

using namespace std;

int main() {
    int N, MAX = 0, sum, arr[10];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int i1 = 1, j1, k1;

    for (int i = 0; i < N - 3; i++) {
        for (int j = i + 1; j < N - 2; j++) {
            for (int k = j + 1; k < N - 1; k++) {
                int P1 = 1, P2 = 1, P3 = 1, P4 = 1;

                for (int i1 = 0; i1 < i + 1; i1++) {
                    P1 *= arr[i1];
                }
                for (int j1 = i + 1; j1 < j + 1; j1++) {
                    P2 *= arr[j1];
                }
                for (int k1 = j + 1; k1 < k + 1; k1++) {
                    P3 *= arr[k1];
                }
                for (int l = k + 1; l < N; l++) {
                    P4 *= arr[l];
                }

                sum = P1 + P2 + P3 + P4;
                if (sum > MAX)
                    MAX = sum;
            }
        }
    }

    cout << MAX << endl;

    return 0;
}
