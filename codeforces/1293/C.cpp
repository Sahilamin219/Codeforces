#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int f[3][N];
int ans;
void solve(int x,int y)
{
	int res=f[x][y]?-1:1;
	/* agar 1 dha to res -1 hoga
	aur zab tino 0 honge tabhi ans=0 hoga aur YES print hoga ;)
	*/
	// cout<<f[x][y]<<"---";
	ans+=res*(f[3-x][y]+f[3-x][y+1]+f[3-x][y-1]);
	f[x][y]^=1;
	// cout<<f[x][y]<<"\n";
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int n,q;
	cin>>n>>q;
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		solve(x,y);
		cout<<(ans?"NO":"YES")<<endl;
	}
 } 