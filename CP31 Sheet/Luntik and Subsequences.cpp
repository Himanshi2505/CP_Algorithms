#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(),x.end()
using namespace std;
const int mod = 1e9 + 7;

void solve() {
    int n;
    cin>>n;
    int a[n];

    int cnt1=0, cnt0 = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == 1) cnt1++;
        if(a[i] == 0) cnt0++;
    }

    cout<<(ll)pow(2,cnt0) * (long long)cnt1<<endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}