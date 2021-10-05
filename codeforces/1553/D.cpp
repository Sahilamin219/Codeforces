#include "bits/stdc++.h"
using namespace std;
void solve(){
    string s, t;cin>>s>>t;
    int n=s.size(), m=t.size();
    if (n < m) {
        cout<<"NO\n";
        return ;
    }
    int j=m-1, i=n-1;
    while(j>=0 and i>=0){
        if(s[i]==t[j]){
            i-=1;j-=1;
        }
        else{
            i-=2;
        }
    }
    if( j==-1 ){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}
