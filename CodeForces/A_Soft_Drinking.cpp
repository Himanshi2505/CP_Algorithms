#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(),x.end()
using namespace std;
const int mod = 1e9 + 7;
 
void solve() {
   int n, k, l, c, d, p, nl, np;
   cin>> n >> k >> l >> c >> d >> p >> nl >> np;
   int ans = min(((k*l)/(n * nl)), min(((c*d)/n) , (p/(n * np))));
   cout<<ans<<endl;
}   
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}