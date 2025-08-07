#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(), x.end()
using namespace std;
const int mod = 1e9 + 7;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    long long aSum = 0, bSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        aSum += a[i];
    }   
    for (int i = 0; i < m; i++){
        cin >> b[i];
        bSum += b[i];
    }
    if(aSum > bSum) cout<<"Tsondu"<<endl;
    else if(aSum < bSum) cout<<"Tenzing"<<endl;
    else cout<<"Draw"<<endl;
    
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
