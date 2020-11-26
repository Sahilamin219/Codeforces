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
ll ncr(ll n,ll m){
    ll ans=1;m=max(m,n-m);
    Fo(i,1,n-m){
        ans=(ans*(m+i))/i;
    }
    return ans;
}
vector<int> par(100005);
int find(int x)
{
	if(par[x]==x)return x;
	return par[x]=find(par[x]);
}
int union_(int x, int y)//x<y
{
	int u=find(x);
	int v=find(y);
	par[u]=v;
}
ll n, m, ans=0;
vi cat(1000000+1), vist(1000000+1 ,0);
void dfs__(int node, int parent, vector<ll> v[], int cur_cats)
{
    if(cur_cats + cat[node] > m)return ;
    if(v[node].size()==1 and node!=1){
		ans++;
		return;
	}
    for(auto x: v[node])
    {
        if(x!=parent and cat[node])dfs__(x, node,v, cur_cats + cat[node]);
        else if(x!=parent)dfs__(x, node,v, 0);
    }
}
void solve()
{
	cin>>n>>m;
    vi v[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>cat[i];
    }
    for(int i=0;i<n-1;i++)
    {
        ll a,b;cin>>a>>b;
        v[a].push_back(b);v[b].push_back(a);
    }
    dfs__(1, -1, v, 0);
    cout<<ans;
}
int main(int argc, char const *argv[]){
	// F.MEX QUERIES
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
    int t=1;//cin>>t;
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
