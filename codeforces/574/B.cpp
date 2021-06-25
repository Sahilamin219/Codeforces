#include "bits/stdc++.h"
using namespace std;
bool u[5005][5005];
void solve(){
	int n, m;cin>>n>>m;
	unordered_map<int, int> degree;
	for(int i=0, a, b;i<m;i++){
		cin>>a>>b;
		u[a][b]=u[b][a]=true;
		degree[a]++;
		degree[b]++;
	}
	int ans=INT_MAX;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(u[i][j]){
				for(int k=j+1;k<=n;k++){
					if( u[j][k] and u[i][k]){
						ans=min(ans, degree[i]+degree[j]+degree[k]);
					}
				}
			}
		}
	}
	if(ans == INT_MAX) puts("-1");
	else printf("%d\n", ans - 6);
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}