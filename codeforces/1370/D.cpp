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
ll n,m,k;
// vector<string> str;
int solve(ll m, vector<ll> v)
{
	ll l=0,p=0;
	f(j,0,s(v)){
		if(!p){
			l++;
			p^=1;
		}
		else{
			if(m>=v[j]){
				l++;p^=1;
			}
		}
	}
	if(l>=k)return 1;
	p=1;l=0;
	f(j,0,s(v)){
		if(!p){
			l++;
			p^=1;
		}
		else{
			if(m>=v[j]){
				l++;
				p^=1;
			}
		}
	}
	if(l>=k)return 1;
	return 0;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// ll n,k;
	cin>>n>>k;
	vector<ll> v(n);
	f(i,0,n)cin>>v[i];
	ll l=1,h=1e9;
	while(l<h)
	{
		ll m=(l+h)>>1LL;
		if(solve(m,v))
		{
			h=m;
		}
		else
		{
			l=m+1;
		}
	}
	cout<<l;
	return 0;
}
// cout.flush();
// fflush(stdout);