#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        unordered_map<int,int> mpp;
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        bool yes = true;
        for (int i=0;i<n;i++){
            mpp[a[i]]++;            
        }
    
        if(mpp.size()>2){
            yes = false;
        }
        
       if(mpp.size()==2){
        int f1 = begin(mpp)->second;
        if(f1 != n/2 && f1 != (n+1)/2){
            yes = false;
        }
       }

       if(yes) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
}
return 0;
}