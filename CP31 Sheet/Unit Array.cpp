#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) cnt1++;
            if(a[i]==-1) cnt2++;
        }

        if(cnt1>=cnt2){//condition 1 is met
            if(cnt2%2==1) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else{
            int ops = cnt2 - n/2;
            if(n/2 % 2 == 1) ops++;

            cout<<ops<<endl;
        }   
    }
    return 0;
}