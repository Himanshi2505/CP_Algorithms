#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(),x.end()
using namespace std;
const int mod = 1e9 + 7;

void solve() {
    ll n;
    cin >> n;
    if(n%25==0)
        {cout<<0<<endl;return;}
    ll num1=n;
    ll num2=n;
    ll ans1=0;
    ll ans2=0;
    while(num1%10 !=5 && num1!=0)
    {
        num1/=10;ans1++;
    }
    num1/=10;
    while(num1 %10 !=2 && num1%10 !=7 && num1!=0)
    {
        num1/=10; ans1++;
    }

    while(num2%10 !=0 && num2!=0)
    {
        num2/=10;ans2++;
    }
    num2/=10; 
    while(num2%10 !=0 && num2%10!=5 && num2!=0)
    {
        num2/=10;ans2++;
    }
    cout<<min(ans1,ans2)<<endl;


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