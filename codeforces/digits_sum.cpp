// #include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
#define long long int

void sol(){
    int n;cin>>n;
    if(n==9){
        cout<<1<<endl;
        return;
    }
    int ans= ceil(n/10);
    cout<<ans<<endl;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
}

