#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;cin>>n;
    int a[n];
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mx<a[i]){
            mx=a[i];
        }
        if(mn>a[i]){
            mn=a[i];
        }
    }

    cout<<mx-mn<<"\n";

}

int32_t main(){
    int t;cin>>t;
    while(t--){
        sol();
    }
}