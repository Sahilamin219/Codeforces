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
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<ll> v(n);
		vector<ll> a(k);
		f(i,0,n)cin>>v[i];
		f(i,0,k)cin>>a[i];
		sort(v.rbegin(), v.rend());
		sort(a.begin(), a.end());
		ll h=0,cnt=0;
		f(i,0,k){
			if(a[i]==1){
				h+=(2*v[cnt]);
				cnt++;
			}
			else{
				h+=v[cnt];
				cnt++;
			}
		}
		ll myend=k-1;
		f(i,0,k){
			if(a[i]!=1){
				h+=v[myend+a[i]-1];
				myend+=(a[i]-1);
			}
		}
		cout<<h<<endl;
	}
	return 0;
}
// cout.flush();
// fflush(stdout);
// if(i!=l or (n+m)%2!=0)