#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
            // if(x%2==0){
            //     cout<<2<<endl;
            //     cout<<x-3<<" "<<3<<endl;
            // }
            // else{
            //     cout<<2<<endl;
            //     if(k%2!=0){
            //     cout<<x-1<<" "<<1<<endl;
            //     }
            //     else{
            //         cout<<x-3<<" "<<3<<endl;
            //     }
            // }
            }
        }
        return 0;
    }