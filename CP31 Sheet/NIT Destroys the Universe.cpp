#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int l = -1, r = -1;  // Proper initialization
        for (int i = 1; i <= n; i++) {
            if (a[i] != 0) {
                if (l == -1) {
                    l = i;
                }
                r = i;  // Update r to the latest non-zero index
            }
        }

        if (l == -1 && r == -1) {
            // No non-zero elements found
            cout << 0 << endl;
        } else {
            bool hasZero = false;
            for (int i = l; i <= r; i++) {
                if (a[i] == 0) {
                    hasZero = true;
                    break;
                }
            }
            if (hasZero) {
                cout << 2 << endl;
            } else {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}
