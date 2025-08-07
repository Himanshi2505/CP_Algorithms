#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(),x.end()
using namespace std;
const int mod = 1e9 + 7;

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n + 1); 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    priority_queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(-(i + a[i]));
    }

    int maxi = 0;
    while (!q.empty()) {
        int node = -q.top();
        q.pop();
        if (node > c) break;
        maxi++;
        c -= node;
    }
    cout << maxi << endl;
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
