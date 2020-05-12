#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    fast
    int t;cin>>t;
    while(t--){
    	ll n,k;cin>>n>>k;
    	if(n%2==0){
    		ll ans=(k*2)+n;
    		cout<<ans<<"\n";
    	}
    	else{
    		ll ans=(k-1)*2;
    		for(ll i=2;i<=n;i++){
    			if(n%i==0){
    				ans+=(n+i);
    				break;
    			}
    		}
    		cout<<ans<<"\n";
    	}
    }
    return 0;
}