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
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
// ll n,m,k;
// vector<string> str;
// set<int> s;
// int dp[101][100001];
// int get(vector<int> v,int ind,int sum)
// {
// }
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	vector<ll> v(n);
	map<ll,ll> mm;
	f(i,0,n){
		cin>>v[i];
		mm[v[i]]++;
	}
	int m;cin>>m;
	vector<int> a(m);
	vector<int> b(m);
	f(i,0,m)cin>>a[i];
	f(i,0,m)cin>>b[i];
	ll w=0;ll si=0;ll cnt=0;
	f(i,0,m){
		ll temp=1*mm[a[i]]+ 1*mm[b[i]];
		// cout<<temp<<"--"<<cnt<<" ";
		if(cnt<mm[a[i]]){
			w=temp;
			si=i+1;
			cnt=mm[a[i]];
		}
		if(cnt==mm[a[i]] and temp>w){
			w=temp;
			si=i+1;
			cnt=mm[a[i]];
		}
	}
	// cout<<"\n"<<w<<" ";
	(si == 0) ? cout<<1<<endl : cout<<si<<"\n";
	return 0;
}
// cout.flush();
// fflush(stdout);
// if(i!=l or (n+m)%2!=0)