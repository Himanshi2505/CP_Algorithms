#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(),x.end()
using namespace std;
const int mod = 1e9 + 7;

void solve() {
    int n,p;
    cin >> n >> p;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>b[i];

    vector<pair<int,int>> v;
    v.push_back({p, n+1}) ;
    for(int i=0;i<n;i++) {  
        v.push_back({b[i], a[i]});
    }
    sort(all(v));

    int total = 1;
    ll cost = p;
    int i = 0;
    while(total<n){
        int left = n - total;
        
        if(v[i].second <= left){
            total += v[i].second;
            cost += v[i].first * 1ll * v[i].second;
        }
        else{
            total = n;
            cost += left * 1ll * v[i].first;
        }
        i++;
    }
    cout<<cost<<endl;

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
