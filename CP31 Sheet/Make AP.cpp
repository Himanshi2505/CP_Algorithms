#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    if((2*b - c)%a == 0 && (2*b - c)/a >0){
        cout<<"YES"<<endl;
    }
    else if((a+c)%(2*b) ==0 && (a+c)/(2*b)>0){
        cout<<"yes"<<endl;
    }
    else if((2*b - a)%c ==0 && (2*b - a)/c >0){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}