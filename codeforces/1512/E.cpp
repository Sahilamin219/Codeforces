#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define pb push_back
#define mkp make_pair
#define int long long

#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

using namespace std;
using namespace __gnu_pbds;


void solve(){
	int n,l,r,s;cin>>n>>l>>r>>s;
	int sum = (n*(n+1))/2;
	int sumL = ((r-l+1)*(r-l+2))/2;
	int rest= n - (r-l+1);
	int sumU = sum - (rest*(rest+1))/2;
	// cout<<sumU<<" "<<sumL<<" ";
	if( s > sumU or s < sumL ){
		cout<<"-1\n";return;
	}
	int cur=sumL, last=n;
	priority_queue<int> pq;
	for(int i=1;i<=(r-l+1);i++)pq.push(i);
	deque<int> ans;
	vector<int> visited(n+1, 0);
	while(cur != s ){
		int k=pq.top();
		if(k==last){
			last--;
			ans.push_back(k);
			pq.pop();
			visited[k]=1;
			continue;
		}
		pq.pop();
		pq.push(k+1);
		cur++;
	}
	while(!pq.empty())ans.push_back(pq.top()), visited[pq.top()]=1, pq.pop();
	int R=r+1;
	for(int i=1;i<=n;i++){
		if(!visited[i] and R<=n)ans.push_back(i), R++;
		else if(!visited[i] )ans.push_front(i);
	}
	for(auto x: ans)cout<<x<<" ";
		cout<<"\n";
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1;cin>>t;
	while(t--)solve();
}