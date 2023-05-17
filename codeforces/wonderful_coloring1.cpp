#include<bits/stdc++.h>


using namespace std;

void sol(){
    string s;cin>>s;

    map<char ,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }

    int cnt1=0,cnt2=0;

    for( auto x : mp){
        if(x.second>1){
            cnt2++;
        }
        if(x.second==1){
            cnt1++;
        }
    }

    cout<<cnt1/2+cnt2<<"\n";
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        sol();
    }
}