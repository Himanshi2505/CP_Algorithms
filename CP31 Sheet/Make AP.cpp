#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    for(int i=1;i<=10^8;i++){
        a = i*a;
        if(2*b == a+c){
            cout<<"yes"<<endl;
            break;
        }
    }
    for(int i=1;i<=10^8;i++){
        b = i*b;
        if(2*b == a+c){
            cout<<"yes"<<endl;
            break;
        }
    }
    for(int i=1;i<=10^8;i++){
        c = i*c;
        if(2*b == a+c){
            cout<<"yes"<<endl;
            break;
        }
    }


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}