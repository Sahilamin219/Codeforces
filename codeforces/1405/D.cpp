#include <bits/stdc++.h>
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
#define Re(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define zrobits(x)	__builtin_ctzll(x)
#define bitcount	__builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
using namespace std;
typedef long long int ll;
#define resultv(v) accumulate(all(v),ll(0))
#define productv(v) accumulate(all(v), ll(1), multiplies< ll >())
#define difference(v) accumulate(all(v), ll(0), std::minus<ll>())
#define vi vector<ll> 
#define pii pair<ll, ll> 
#define vvi vector<vi>
#define vpii vector<pii>
#define INF 0x3f3f3f3f
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
ll diameter=0;
vi depth(100001,0), tr[100001];
ll dfs__(ll node ,ll parent)
{
	ll dia1=0;
	for(auto x: tr[node])
	{
		if(x!=parent)
		{
			depth[x] = 1 + depth[node];
			ll dia2 = 1 + dfs__(x, node);
			diameter = max(diameter, dia1 + dia2);
			dia1 = max(dia1, dia2);
		}
	}
	return dia1;
}
void solve()
{
	ll n,a,b,da,db;
	cin>>n>>a>>b>>da>>db;
	Fo(i,1,n)
	{
		ll x,y;cin>>x>>y;
		tr[x].push_back(y);tr[y].push_back(x);
	}
	// d=(b-a); .. distance b/w alice and bob (initailly)
	// case1 a>=d alice
	// case2 2a>=tr_d alice
	// case3 b>2a bob
	// case4 b<=2a ? -alice

	diameter=0;
	depth.clear();
	depth[a]=0; // no need ...but looks nice
 	dfs__(a, -1); // root the treee at alice(a);
	puts( diameter <= 2*da or db <= 2*da or depth[b] <= da ? "Alice" : "Bob");
	for(int i=1;i<n+1;i++) tr[i].clear();
}
int main(int argc, char const *argv[]){
	// F.MEX QUERIES
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
    int t=1;cin>>t;
    while(t--)solve();
    // exit(0);
    return 0;
    // Sept roottree bublwires
    // Oct sumexs pathsum Decreasing Srrnmieeda Chef Likes Good Sequences 
    // Nov flip_bits iron-magnet-wall 
}
// long int stol (const string&  str, size_t* idx = 0, int base = 10)
// result = std::accumulate(arr, arr + size, num, std::minus<int>()); 
// int equal(vector<int> arr) {
//     auto min_ = *min_element(arr.begin(), arr.end());
//     auto ans = numeric_limits<int>:: max();
//     for(auto i=0;i<5;i++){
//         auto operations = [min_,i](auto init, auto j){
//             auto t = j-(min_-i);
//             return init + t/5 + t%5/2 + t%5%2;
//         };
//         ans=min(ans,accumulate(arr.begin(), arr.end(), 0, operations));
//     }
//     return ans;
// }
// pair<long long,int> dfs(int node)
// {
// 	long long mx=0;
// 	int sz=1;
// 	for (int u:v[node])
// 	{
// 		auto tmp=dfs(u);
// 		mx=max(mx,tmp.first);
// 		sz+=tmp.second;
// 	}
// 	return {mx+sz,sz};
// }
