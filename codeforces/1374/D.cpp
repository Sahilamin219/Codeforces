#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        map<ll,ll> m;
        ll count=0;
        for(int i=0;i<n;i++){
            ll value;cin>>value;
            if(value%k)m[k-(value)%k]++;
            else{
                count++;
            }
        }
        if(count==n){
            cout<<0<<endl;continue;
        }
        int maxi=0;ll store=0;
        map<ll,ll>:: iterator x;
        for(x=m.begin();x!=m.end();x++){
            if(x->second==maxi and store<x->first){
                store=x->first;
            }
            if(x->second>maxi){
                maxi=x->second;
                store=x->first;
                // cout<<x->second<<" "<<x->first<<endl;
            }
        }
        // cout<<maxi<<" "<<store<<" ";
        ll ans=store;
        ans+=(maxi-1)*k;
        cout<<ans+1<<endl;
    }
    return 0;
}