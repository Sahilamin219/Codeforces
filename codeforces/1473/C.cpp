#include <bits/stdc++.h>
#define mod 1000000007;
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
struct myComp{constexpr bool operator()( pair<ll,ll> const& a, pair<ll,ll> const& b) const noexcept{return a.second < b.second;}};

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
	    int n, k;cin>>n>>k;
	    int how_many_swaps = n-k+1;
	    for(int i=0;i< k- how_many_swaps;i++)cout<<i+1<<" ";
	    for(int i=0;i<how_many_swaps;i++)cout<<k--<<" ";
	    cout<<"\n";
	}
	return 0;
}