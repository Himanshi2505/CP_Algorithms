#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(), x.end()
using namespace std;
const int mod = 1e9 + 7;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if ((x | a[i]) != x) break;
        ans |= a[i];
    }
 
    for (int i = 0; i < n; i++) {
        if ((x | b[i]) != x) break;
        ans |= b[i];
    }

    for (int i = 0; i < n; i++) {
        if ((x | c[i]) != x) break;
        ans |= c[i];
    }

    if (ans == x) cout << "Yes"<<endl;
    else cout << "No"<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
