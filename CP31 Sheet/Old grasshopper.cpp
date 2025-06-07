#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x0,n;
        cin>>x0>>n;

        long long d;
        int r = n % 4;
        if(r==0) d = 0;
        else if (r==1) d = -n;
        else if( r == 2) d = 1;
        else d = n+1;

        if(x0 % 2 == 0){
            cout<< x0 + d <<endl;
        }
        else{
            cout<< x0 - d <<endl;
        }
    }
    return 0;
}
