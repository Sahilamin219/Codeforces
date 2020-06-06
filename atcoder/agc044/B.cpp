#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
const int m=501;
int n;
int near[m][m];
int visited[m][m];
void dfs(int x_val, int y_val, int visited[][501], int near[][501]){
	if(x_val>=0 and y_val>=0 and x_val<=n and y_val<=n){
		int z=visited[x_val][y_val]+near[x_val][y_val];
		f(i,0,4){
			int x=X[i]+x_val;
			int y=Y[i]+y_val;
			if(x>=0 and y>=0 and x<=n and y<=n and z<near[x][y]){
				near[x][y]=z;
				dfs(x,y,visited,near);
			}
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    // vector<vector<int>> near(n+1,vector<int> (n+1,0));
    // vector<vector<int>> visited(n+1,vector<int> (n+1,1));
    f(i,1,n+1){
    	f(j,1,n+1){
    		near[i][j]=min(min(i,n-i+1),min(j,n-j+1))-1;
    		visited[i][j]=1;
    	}
    }
    int ans=0;
    for (int it = 0; it < n*n; it++){
        int id;
        cin >> id;
        int x = (id+n-1)/n;
        int y = id % n;
        if (y == 0) y += n;
        ans += near[x][y];
        visited[x][y] = 0;
        dfs(x, y, visited, near);
    }
    cout<<ans<<"\n";
	return 0;
}