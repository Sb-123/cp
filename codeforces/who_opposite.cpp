#include<iostream>
using namespace std;
#define long long int

void sol(){
    int a,b,c;cin>>a>>b>>c;
    int d=0;
  
    int n= 2*(abs(a-b));

    if(a>n or b>n or c>n){
        cout<<"-1"<<"\n";
        return;
    }else{
        
        if(c>n/2){
            d=c-n/2;
        }else{
            d=c+n/2;
        }
    }
    cout<<d<<"\n";
}

int32_t main(){
    int t;cin>>t;
    while(t--){
        sol();
    }
}