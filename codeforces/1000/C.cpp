#include <bits/stdc++.h>
#define mod 1000000007;
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
struct myComp{constexpr bool operator()( pair<ll,ll> const& a, pair<ll,ll> const& b) const noexcept{return a.second < b.second;}};
const ll maxn = (2e5)+5;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	map<ll, ll> m;
	for(int i=0;i<n;i++){
	    ll a,b;cin>>a>>b;
	    m[a]++;
	    m[b+1]--;
	}
	ll cur_status_of_no_of_lines=0, prev=0;
	auto it=m.begin();
	vector<ll> ans(maxn);
	for(;it!=m.end();it++){
	    ll vl1=it->first;
	    ll end_or_start=it->second;
	    ll range=(vl1 - prev);//it->first stores cordinates and it-<second ..the case of +/- 1
	    prev = it->first;
	    ans[cur_status_of_no_of_lines] += range;
	    cur_status_of_no_of_lines += end_or_start;
	}
	for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
	return 0;
}
