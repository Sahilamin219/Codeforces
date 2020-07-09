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
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		string s;cin>>s;
		vector<ll> mlis(m);f(i,0,m)cin>>mlis[i];
		// vector<vector<ll>> v;//(m, vector<ll> (26,0));
		vector<ll> vv(26,0);
		vector<ll> cnt(n,0);
		f(i,0,m){
			cnt[mlis[i]-1]++;
		}
		r(i,n-1,0){
			cnt[i-1]+=cnt[i];
		}
		for(int i=0;i<n;i++){
			vv[s[i]-'a']+=(cnt[i]+1);
		}
		for(auto x: vv)cout<<x<<" ";
			cout<<endl;
	}
	// for(auto x: s)cout<<x<<" ";
	// print()//std::string.find("string to find")!=std::string::npos
	// cout<<s(s);
	// cin>>n>>m;
	// f(i,0,n){
	// 	string s;cin>>s;
	// 	v.push_back(s);
	// }
	// // for(auto x: v)cout<<x<<endl;
	// vector<vector<int>> horizontal(n,vector<int> (n,0));
	// vector<vector<int>> vertical(n,vector<int> (n,0));
	// for(int i=0;i<n;i++){
	// 	int cnt=0;
	// 	for(int j=0;j<n;j++){
	// 		if(v[i][j]=='.' and j==n-1)cnt++;
	// 		if(v[i][j]=='.' and j!=n-1){
	// 			cnt++;
	// 		}
	// 		else{
	// 			int k=j-1;
	// 			// if(j==1)v[i][0]=1;
	// 			// if(j>1)k=j-1;
	// 			while(k>-1 and v[i][k]=='.'){
	// 				horizontal[i][k]=cnt;
	// 				k--;
	// 			}
	// 			cnt=0;
	// 		}
	// 	}
	// }
	// for(int i=0;i<n;i++){
	// 	int cnt=0;
	// 	for(int j=0;j<n;j++){
	// 		if(v[j][i]=='.' and j==n-1)cnt++;
	// 		if(v[j][i]=='.' and j!=n-1){
	// 			cnt++;
	// 		}
	// 		else{
	// 			// int k;
	// 			// if(j==1)v[0][i]=1;
	// 			// if(j>1)k=j-1;
	// 			int k=j-1;
	// 			while(k>-1 and v[k][i]=='.'){
	// 				vertical[k][i]=cnt;
	// 				k--;
	// 			}
	// 			cnt=0;
	// 		}
	// 	}
	// }
	// // for(auto x:horizontal){
	// // 	for(auto y:x){
	// // 		cout<<y<<" ";
	// // 	}cout<<"\n";
	// // }
	// vector<vector<int>> wgt(n,vector<int> (n,0));
	// f(i,0,n){
	// 	f(j,0,n){
	// 		wgt[i][j]=(vertical[i][j])-m + (horizontal[i][j])-m;
	// 	}
	// }
	// int w=0;
	// f(i,0,n){
	// 	f(j,0,n){
	// 		if(w<wgt[i][j]){
	// 			w=wgt[i][j];
	// 			maxi_x=i+1;
	// 			max_y=j+1;
	// 		}
	// 	}
	// }
	// cout<<maxi_x<<" "<<max_y;
	// dfs()
	return 0;
}