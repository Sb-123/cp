#include<iostream>

using namespace std;

void sol(){
    int n;cin>>n;
    int a[n];
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mn>a[i]){
            mn=a[i];
        }
    }
    int cnt_mn=0;
    for(int i=0;i<n;i++){
        if(a[i]==mn)cnt_mn++;
    }
    cout<<n-cnt_mn<<endl;
   
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        sol();
    }
}

