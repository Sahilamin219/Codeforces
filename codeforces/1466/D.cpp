#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef vector<ll> vi;

const ll maxn=(ll)2e5+5;
vector<ll> gr[maxn];
ll depth[maxn], degree[maxn]={0};
vector<ll> w(maxn);
ll n;
ll sum = 0;
vector<pair<int, int>> get_me;
void input_me()
{
	cin>>n;
	for(int i=0;i<n+1;i++)gr[i].resize(0);
	for(ll i=1;i<=n;i++)cin>>w[i], degree[i]=0;
	for(ll i=1;i<n;i++)
	{
		ll a,b;cin>>a>>b;
		gr[a].push_back(b);
		gr[b].push_back(a);
		degree[a]++;degree[b]++;
	}
}

inline bool read()
{
	if(!(cin>>n))return false;
	return true;
}

void solve_me()
{
	input_me();
	ll ans=0;
	vector<ll> to_Sort;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<degree[i];++j)
		{
			to_Sort.push_back(w[i]);
		}
		ans+=w[i];
	}
	sort(to_Sort.rbegin(), to_Sort.rend());
	for(auto &i:to_Sort){cout<<ans<<" "; ans += i;}
		cout<<ans<<"\n";
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int Testcase=1;assert(cin>>Testcase);
	while(Testcase--)solve_me();
	return 0;
}