#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int answer = 0;
        vector<int>a(n);
        for(auto &i : a) cin>>i;
        
        for(int i=0,j=1,sum=0; i<n;i++){
            sum+= a[i];
            while(j*j<sum) j+=2;
            if(sum==j*j) answer+=1;
        }
        cout<<answer<<endl; 
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define vec(type,var,size) vector<type> var(size)
// #define vec2d(type,var,size1,size2,initialize) vector<vector<type>> var(size1,vector<type>(size2,initialize))
// #define f(i,a,b,c) for(ll i=a;i<b;i+=c)
// #define fd(i,a,b,c) for(ll i=a;i>=b;i-=c)
// #define input(vec) for(ll i=0;i<vec.size();i++) cin>>vec[i];
// #define print(vec) for(auto i:vec) cout<<i<<" ";
// #define sorti(vec) sort(vec.begin(),vec.end())
// #define sortd(vec) sort(vec.begin(),vec.end(), greater<int> ())
// #define double long double
// #define pi pair<int,int>
// #define pl pair<ll,ll>
// #define all(v) v.begin(), v.end()
// #define rev(vec) reverse(all(vec));
// #define vec_inp(var,size) vector<ll> var(size);input(var);
// #define pb push_back
// #define fi first
// #define sc second
// #define umap unordered_map
// #define mset multiset
// #define nl cout<<endl;

// ll mod=1000000007;

// bool comp0(const vector<ll> &a,const vector<ll> &b){
//     return a[0]<b[0];
// }

// bool comp1(const vector<ll> &a, const vector<ll> &b){
//     return a[1]<b[1];
// }

// int main(){
//     cout.precision(10); cout.setf(ios::fixed);
//     ll t;cin>>t;
//     vector<ll> pre(10001,0);
//     f(i,1,100,2) pre[i*i] = 1;
//     while(t--){
//         ll n; cin>>n;
//         ll cnt = 0;
//         ll ans = 0;
//         ll a;
//         f(i,0,n,1){
//             cin>>a;
//             cnt += a;
//             if(pre[cnt]) ans++;
//         }
//         cout<<ans<<endl;
//     }
// }