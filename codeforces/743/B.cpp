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
	ll n,k;cin>>n>>k;
	// vector<ll> v;
	if(k%2)cout<<1;
	else{
		ll ans=0;
		ll m = pow(2,ans);
		while(k%m==0){
			ans++;
			m=pow(2,ans);
		}
		cout<<ans;

	}
	return 0;
}
// cout.flush();
// fflush(stdout);