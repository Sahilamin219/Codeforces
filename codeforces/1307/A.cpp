#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, d;
        cin>>n>>d;
        vector<ll> v(n);
        for(ll i=0;i<n; i++){
            cin>>v[i];
        }
        ll i=1;
        while(i<n){
            if(d<=0){
                break;
            }
            if(d>=i&&v[i]>0){
                v[0]++;
                v[i]--;
                d-=i;
            }
            else i++;
        }
        cout<<v[0]<<endl;
    }
    return 0;
}