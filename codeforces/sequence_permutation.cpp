#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;

void sol(){
    int n;cin>>n;
    string s;
    cin>>s;

    string temp=s;
    int cnt=0;
    sort(temp.begin(),temp.end());

    for(int i=0;i<n;i++){
        if(s[i]!=temp[i]){
            cnt++;
        }
    }
    cout<<cnt<<"\n";

}

int main(){
    int t;cin>>t;
    while(t--){
        sol();
    }
}