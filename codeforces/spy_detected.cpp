#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n;cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }

    for(int i=0;i<n;i++){
        if(mp[a[i]]==1){
            cout<<i+1<<"\n";
            return;
        }
    }


}


int32_t main(){
    int t;
    cin>>t;
    while(t--){
        sol();
    }
}