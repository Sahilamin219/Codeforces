#include "bits/stdc++.h"
#define int long long
using namespace std;
void solve(){
	int n;cin>>n;
	vector<int> v(n);
	for(auto &i:v)cin>>i;
	// KITNA BADAL GAYA INSAN >> KITNA BADAL GAYA INSAN
		vector<int> ans;
	int total=n;
	for(int i=0;i<n;i++){
		vector<int> tmp(n);
		tmp[i]=v[i];
		int cur=v[i];
		int mn=v[i];
		for(int j=i+1;j<n;j++){
			tmp[j]=min(mn, v[j]);
			cur+=tmp[j];
			mn=min(mn, v[j]);
		}
		mn=v[i];
		for(int j=i-1;j>=0;j--){
			tmp[j]=min(mn, v[j]);
			cur+=tmp[j];
			mn=min(mn, v[j]);
		}
		if(total<=cur){
			total=cur;
			ans=tmp;
		}
		// cout<<cur<<" ";
	}
	for(auto x:ans)cout<<x<<" ";
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	solve();
	return 0;
}