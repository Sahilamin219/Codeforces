#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
vector<vector<string>> v;
int n, m, k, x, y, ans=0;
void dfs(int i, int j, int z){
	if(i>=0 and i<n and j>=0 and j<m and z>=0 and z<k and v[z][i][j]=='.')
	{
		ans++;
		v[z][i][j]='#';//do it first;
		dfs(i+1, j, z);
		dfs(i-1, j, z);
		dfs(i, j+1, z);
		dfs(i, j-1, z);
		dfs(i, j, z+1);
		dfs(i, j, z-1);	
	}
}
void solve_me()
{
	cin>>k>>n>>m;
	for(int i=0;i<k;i++)
	{
		// char layer[11][11];
		vector<string> layer(n);
		for(int row=0;row<n;row++)
		{
			// for(int j=0;j<m;j++)
			// {
			// 	cin>>layer[row][j];
			// }
			cin>>layer[row];
			// cout<<"!\n";
		}
		v.push_back(layer);
	}
	cin>>x>>y;
	dfs(x-1,y-1, 0);
	cout<<ans;
}
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int Testcase=1;//cin>>Testcase;
	while(Testcase--)solve_me();
	return 0;
}