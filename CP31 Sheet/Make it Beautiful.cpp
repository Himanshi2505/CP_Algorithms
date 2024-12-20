#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //given array is sorted
        if(a[0]==a[n-1]) cout<<"NO"<<endl;  //minimum element = max element 
        else{
            cout<<"Yes"<<endl;
            cout<<a[n-1]<<" "<<a[0]<<" ";
            for(int i=1;i<n-1;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;

        }
        
    }
    return 0;
}