#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;cin>>n;
    int k;
    while(n){
           k=n-1;
          n &=k;
    }

    cout<<k<<"\n";
}


int main(){
    int t;cin>>t;
    while(t--){
        sol();
    }
}
