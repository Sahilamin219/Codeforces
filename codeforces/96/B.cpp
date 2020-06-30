#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define fi first
#define se second
#define pb push_back
#define mkp make_pair
#define pi pair<long long int,long long int>
#define mapi map<long long int,long long int>
#define mod 1000000007;
#define all(x) x.begin(), x.end()
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount    __builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
#define print() cout<<"\n";
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
#define vi(v,n) vector<long long int> v(n)
#define vvi(v,n,m) vector<vector<long long int> > v(n, vector<long long int> (m,0));
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
const int cons=501;
// int m,n;
// int near[m][m];
// int visited[m][m];
// void dfs(int x_val, int y_val, int visited[][501], int near[][501]){
//     if(x_val>=0 and y_val>=0 and x_val<=n and y_val<=n){
//         int z=visited[x_val][y_val]+near[x_val][y_val];
//         f(i,0,4){
//             int x=X[i]+x_val;
//             int y=Y[i]+y_val;
//             if(x>=0 and y>=0 and x<=n and y<=n and z<near[x][y]){
//                 near[x][y]=z;
//                 dfs(x,y,visited,near);
//             }
//         }
//     }
// }
// string lastN(string input)
// {
//      return input.substr(input.size() - n);
// }
// int maxi_x=0,max_y=0;
// vector<vector<int>> visited(n, vector<int> (m,0));
// vector<string> v;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n;cin>>n;
	string s="47";
	while(1){
		sort(all(s));
		do{
			if(stoll(s)>=n){
				cout<<stoll(s);return 0;
			}
		}
		while(next_permutation(all(s)));
		s+="47";
	}
	cout<<stoll(s);
	return 0;
}