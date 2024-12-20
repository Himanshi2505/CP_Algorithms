// #include<bits/stdc++.h>
// #define ll long long
// #define fir first
// #define sec second
// #define pii pair<int,int>
// using namespace std;

// const int maxn=500005;
// const int inf=0x3f3f3f3f;

// signed main()


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b<=d && c<=a+d-b){
            cout<<(d-b) + (a+d-b-c)<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
