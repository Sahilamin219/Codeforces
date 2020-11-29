#include <bits/stdc++.h>
#include <string_view>
#pragma GCC optimize("Ofast")
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
#define Re(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define F first
#define S second
#define mod 1000000009
#define MAX 100001
#define all(x) x.begin(), x.end()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vi> vvi;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {return (a.second < b.second);}
static bool mysort(pair<int, int>& a, pair<int, int>& b){ return a.second==b.second?a.first<b.first:a.second<b.second;}
template<typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
struct cmp {
	bool operator() (pair<int, int> a, pair<int, int> b) {
		 return a.first+a.second > b.first+b.second;
	}
};
void solve()
{
	ll n,p,k;cin>>n>>p>>k;
	string s;cin>>s;
	ll x,y;cin>>x>>y;
	ll ans=INT_MAX;
	ll freq[k]{};
	for(int i=p-1;i<n;i++)
	{
		if(s[i]=='0')
		{
			freq[(i-p+1)%k]++;
		}
	}
	int num=0;
	for(int i=p-1;i<n;i++)
	{
		ll cnt=freq[(i-p+1)%k]*x;
		if(s[i]=='0')freq[(i-p+1)%k]--;
		ans = min(ans, num*y + cnt);
		num++;
	}
	cout<<ans<<"\n";
}
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int t=1;cin>>t;
	while(t--)solve();
	return 0;
}