#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(), x.end()
using namespace std;
const int mod = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    if (k == 2 || k == 3 || k == 5) {
        for(auto it : a){
            if(it%k == 0){
                cout<<0<<endl;
                return;
            }
        }
        int mini = INT_MAX;
        int ops = 0;
        for(int i=0;i<n;i++){
            ops = (k - (a[i]%k))%k;
            mini = min(mini,ops);
        }
        cout<<mini<<endl;
    }

    if (k == 4){
        int mini2 = 4;
        for(int i=0;i<n;i++){
            if(a[i]%4==0){
                cout<<0<<endl;
                return;
            }
            mini2 = min(mini2, (4-a[i]%4)%4);
        }

        int cnt = 0;
        for(auto it: a){
            if(it%2==0) cnt++;
        }
        int ops2 = max(0,2-cnt);
        
        cout<<min(mini2,ops2)<<endl;
    }
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
