#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;

        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
                cout<<endl;
            }
        }
        else if(k==1 || (k==2 && n%2==1)){
            cout<<"NO"<<endl;
        }
        else{//when x==1 and k is 2 or greater than 2 
            cout<<"YES"<<endl;
            if(n%2==0){ //even n
                cout<<n/2<<endl;
                for(int i=0;i<n/2;i++){
                    cout<<2<< " ";
                    cout<<endl;
                }
            }
            else{ //odd n
            cout<<n/2<<endl;
            cout<<3<<" ";
            for(int i=0;i<n/2 - 1;i++){
                cout<<2<<" ";
                cout<<endl;
            }

            }

        }
    }
    return 0;
}