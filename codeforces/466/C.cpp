#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    fast 
    ll t;t=1;
    while(t--){
    	ll n;cin>>n;ll sum=0;
    	vector <ll> v;
    	for(ll i=0;i<n;i++){
    		ll val;cin>>val;
    		v.push_back(val);
    		sum+=val;
    	}
    	ll count=0, prifix_sum=0,ans=0;
    	if(sum%3==0 and n>2){
    		f(i,0,n-1){
    			prifix_sum+=v[i];
    			if(prifix_sum==2*(sum/3))ans+=count;
    			if(prifix_sum==sum/3)count++;
    		}
	    }
	    cout<<ans;
    }
    return 0;
}