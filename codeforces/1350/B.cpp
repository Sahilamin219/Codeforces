#include <bits/stdc++.h>
#define s(a) int(a.size())
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast
    int t;cin>>t;
    while(t--){
    	int n;cin>>n;
    	vector<ll> v(n+1,0);
        vector<ll> f(n+1,1);
    	for(int i=1;i<n+1;i++){
    		cin>>v[i];
    	}
    	ll ans=1;
    	for(ll i=1;i<=n;i++){
            for(ll j=2*i;j<=n;j+=i){
                if(v[j]>v[i]){
                    f[j]=max(f[j],f[i]+1);
                }
            }
        }
        for(int i=1;i<n+1;i++){
            ans=max(ans,f[i]);
        }
    	cout<<ans<<"\n";
    }
    return 0;
}