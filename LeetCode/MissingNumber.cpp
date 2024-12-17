#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int xor1=0;
    for(int i=0;i<n;i++){
        xor1 = xor1 ^ i;
    }

    int xor2 = 0;
    for(int i=0;i<n;i++){
        xor2 = xor2^a[i];
    }
     
     int missingno = xor1 ^ xor2;
     cout<< missingno;
    return 0;
}

