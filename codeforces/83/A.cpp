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
// ll n,m,k;
// vector<string> str;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	vector<ll> v(n);
	ll ans=0,cnt=1;
	cin>>v[0];
	f(i,1,n+1){
		if(i<n)cin>>v[i];
		else{
			v[n]=v[n-1]+1;
		}
		if(v[i]==v[i-1]){
			cnt++;
		}
		else{
			ans+=((cnt*(cnt+1))/2);
			cnt=1;
		}
	}
	cout<<ans;
	return 0;
}
// cout.flush();
// fflush(stdout);