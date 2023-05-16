#include<iostream>
#include<set>
#include<cmath>
#include<iterator>
#include<map>
// #include<bits/stdc++.h>
using namespace std;

// void sol(){
    string s;
    
    int len=s.size();
    if(len==1){
        cout<<"0"<<"\n";
        return;
    }
    set<char>st;
    for(int i=0;i<len;i++){
        st.insert(s[i]);

    }

    int sm_l=st.size();
    int ans=(len-(len-sm_l))/2;
    // cout<<len<<" ";
    // cout<<sm_l<<" ";
    // cout<<ans<<" ";

    if(sm_l==len){
        cout<<ans<<"\n";
    }else{
        cout<<ans+1<<"\n";
    }

}

void sol(){
    string s;
    cin>>s;
    int len=s.size();
    if(len==1){
        cout<<"0"<<"\n";
        return;
    }
    map<char,int>mp;

    for(int i=0;i<len;i++){
        mp[s[i]]++;
    }
    int c1=0,c2=0;
   for(auto x : mp){
     
    if(x>1){
        c2++;
    }else{
        c1++;
    }
   }
//    cout<<c2<<" "<<c1<<endl;
    int ans= c2/2 + floor(c1/2);
    
}

int32_t main()
{

   int t;cin>>t;
   while(t--){
    sol();
   }
    return 0;
}
