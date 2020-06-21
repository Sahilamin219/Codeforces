// i m n't bored yet ...
#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
ll n,m;
// vector<string> v;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n;cin>>n;
	while(n--){
		ll l,r;cin>>l>>r;
		ll a=log2(l);
		ll b=log2(r+1);
		if(l==r)cout<<l<<endl;
		else if(a<b)cout<<((1LL<<b)-1)<<endl;
		else{
			ll ans=l;
			ll i=0;
			while((ans|(1LL<<i))<=r){
				ans=ans|(1LL<<i);
				i++;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
// cout.flush();
// fflush(stdout);