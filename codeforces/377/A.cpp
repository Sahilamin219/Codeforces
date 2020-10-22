#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100000
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cerr<< #x << ':' << x << endl;
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define fit(it,c) for ( __typeof((c).begin()) it=(c).begin(); it!=(c).end(); it++ )
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{return (a.second < b.second);}
static bool mysort(pair<int, int>& a, pair<int, int>& b)
{ return a.second==b.second?a.first<b.first:a.second<b.second;}
 
vi visited(5001, 0);
map<string, vector<string>>  mapi;
map<string, ll>  vis;
ll ans=0;
vi ans_v;
ll n,d;
 
ll find_dis(vi points[], ll a, ll b)
{
	ll wgt=0;
	for(int i=0;i<d;i++)
	{
		wgt+=abs(points[a][i]-points[b][i]);
	}
	return wgt;
}

int find_index(string str, string s){
    vector<int> v;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, s.length()) == s) {
            v.push_back(i);
        }
    }
    return v.size();
}

void dfs(string s, ll h)
{
    vis[s]=1;
    for (auto x: mapi[s])
    {
        if(!vis[x])
        {
            dfs(x ,h+1);
        }
    } 
    ans=max(ans , h);
}

bool dfs1(vector<string> v, vvi& vis1, int i, int j)
{
	// cout<<i<<" "<<j<<endl;
	if(i>=n or j>=n)return false;
	if(i<0 or j<0)return false;
	if(i==n-1 and j==n-2)return true;
	if(i==n-2 and j==n-1)return true;
	vis1[i][j]=1;
	if(i<n-1 and v[i+1][j]=='1' and !vis1[i+1][j])
	{
		if(dfs1(v, vis1, i+1, j))return true;
	}
	if(j<n-1 and v[i][j+1]=='1' and !vis1[i][j+1])
	{
		if(dfs1(v, vis1, i, j+1))return true;
	}
	if(i>0 and v[i-1][j]=='1' and !vis1[i-1][j])
	{
		if(dfs1(v, vis1, i-1, j))return true;
	}
	if(j>0 and v[i][j-1]=='1' and !vis1[i][j-1])
	{
		if(dfs1(v, vis1, i, j-1))return true;
	}
	return false;
}
const int mxn=201;
int a[mxn][mxn];
void solved()
{
	int n;cin>>n;
	f(i,0,n)
	{
		f(j,0,n)
		{
			char inp;cin>>inp;
			a[i][j]=inp&1;
		}
	}
	int changes=0;
	changes = 2 - abs( a[0][1] + a[1][0] - a[n-1][n-2] - a[n-2][n-1] );
	int same_bit= a[0][1];

	if(same_bit == a[n-1][n-2] and same_bit == a[n-2][n-1])same_bit^=1;

	cout<<changes<<"\n";
	if(same_bit != a[0][1])cout<<1<<" "<<2<<endl;
	if(same_bit != a[1][0])cout<<2<<" "<<1<<endl;
	if(same_bit == a[n-1][n-2])cout<<n<<" "<<n-1<<endl;
	if(same_bit == a[n-2][n-1])cout<<n-1<<" "<<n<<endl;
}

vector<vector<int>> gr;
vector<int> value;
void get_value_dfs(int node, int parent , int d)
{
	if(d%2) value[node]=2;
	else value[node]=1;
	for(auto i: gr[node])
	{
		if(i!=parent)get_value_dfs(i,node,d+1);
	}
}
ll power(ll x, ll y, ll p) 
{ 
    ll res = 1; // Initialize result 
  
    // Update x if it is more than or 
    // equal to p 
    x = x % p;  
  
    while (y > 0) { 
        // If y is odd, multiply x with the result 
        if (y & 1) 
            res = (res * x) % p; 
  
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p; 
    } 
    return res; 
} 
void get_seque(ll d)
{
	ll maxi=1e5-2;
	vector<ll> ans;
	while(d>maxi)
	{
		ans.push_back(maxi+1);
		ans.push_back(maxi+2);
		ans.push_back(1);
		d-=maxi;
	}
	ans.push_back(d+1);
	ans.push_back(d+2);
	cout<<ans.size()<<endl;
	for(auto x: ans){cout<<x<<" ";}cout<<"\n";
}
vector<string> v;
ll m,k, cnt=0, c=0;
vvi visting;
void get_pattern_dfs(int i, int j, int count)
{
	if(i<0 or i>=n or j<0 or j>=m)return;
	visting[i][j]=1;c++;
	// cout<<cnt-k<<" "<<count<<"\n";
	if(c>cnt-k)v[i][j]='X';
	if(c>cnt-k)
	{
		if(i>0 and v[i-1][j]=='.' and visting[i-1][j]==0){ v[i-1][j]='X';get_pattern_dfs(i-1,j,count++);}
		if(i<n-1 and v[i+1][j]=='.' and visting[i+1][j]==0){ v[i+1][j]='X';get_pattern_dfs(i+1,j,count++);}
		if(j>0 and v[i][j-1]=='.' and visting[i][j-1]==0){ v[i][j-1]='X';get_pattern_dfs(i,j-1,count++);}
		if(j<m-1 and v[i][j+1]=='.' and visting[i][j+1]==0){ v[i][j+1]='X';get_pattern_dfs(i,j+1,count++);}
		// cout<<v[i][j]<<" ";
		return ;
	}
	// cout<<v[i][j]<<" ";
	if(i>0 and v[i-1][j]=='.' and visting[i-1][j]==0 )get_pattern_dfs(i-1,j,count++);
	if(i<n-1 and v[i+1][j]=='.' and visting[i+1][j]==0 )get_pattern_dfs(i+1,j,count++);
	if(j>0 and v[i][j-1]=='.' and visting[i][j-1]==0 )get_pattern_dfs(i,j-1,count++);
	if(j<m-1 and v[i][j+1]=='.' and visting[i][j+1]==0 )get_pattern_dfs(i,j+1,count++);
}
void solve() 
{
    cin>>n>>m>>k;
    v.resize(n);
    visting.resize(n);
    f(i,0,n)cin>>v[i];
    int store_i, store_j;
    f(i,0,n)
    {
    	f(j,0,m)
    	{
    		if(v[i][j]=='.') { store_i=i; store_j=j; cnt++; }
    		visting[i].pb(0);
    	}
    }
    get_pattern_dfs(store_i, store_j, 0);
    f(i,0,n)cout<<v[i]<<endl;
}
int main() 
	{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	/*
	Your skin isn't paper, don't cut it 
	Your face isn't a mask, don't hide it 
	Your size isn't a book, don't judge it
	Your life isn't a film, don't end it
	*/
	// ll t;cin>>t;while(t--)
	solve();
}
// To the person reading this, you are beautiful and you look even prettier when you smile.
// I promise you will have a great day ahead.
// https://codeforces.com/problemset/problem/1304/B
// https://codeforces.com/problemset/problem/747/A
// https://codeforces.com/problemset/problem/331/C3
// https://codeforces.com/problemset/problem/1015/D
// https://codeforces.com/blog/entry/74235
// https://codeforces.com/blog/entry/71545
// Part I focuses on elementary data structures, sorting, and searching. 
// Topics include union−find, binary search, stacks, queues, bags, insertion sort, selection sort, 
// shellsort, quicksort, 3-way quicksort, mergesort, heapsort, binary heaps, binary search trees,
// red−black trees, separate-chaining and linear-probing hash tables, Graham scan, and kd-trees.
// balanced seach tree.
// Part II focuses on graph and string-processing algorithms.
// Topics include depth-first search, breadth-first search, topological sort, Kosaraju−Sharir,
// Kruskal, Prim, Dijkistra, Bellman−Ford, Ford−Fulkerson, LSD radix sort, MSD radix sort,
// 3-way radix quicksort, multiway tries, ternary search tries, Knuth−Morris−Pratt, Boyer−Moore,
// Rabin–Karp, regular expression matching, run-length coding, Huffman coding, LZW compression 
// and Burrows−Wheeler transform.	
void bfs(int node)
{
	int N=1e5+1;
	vector<int> adj[N];
	vector<bool> visited(N, false);
	unordered_map<int, int> mp;
	vector<int> goods(N);
	vector<int> level(N, 0);
	int ans=0;
	int n, m, k, s;
	level[node]=0;
	queue<int> q;
	mp[goods[node]]++;
	q.push(node);
	while(!q.empty())
	{
		int tp=q.front();
		q.pop();
		visited[tp]=true;
		if(mp.find(goods[tp])==mp.end())
		{
			ans+=level[tp];
			mp[goods[tp]]++;
		}
		cout<<ans<<endl;
		if(mp.size()==s)
		{
			cout<<ans<<" ";
			return;
		}
		for(auto child: adj[tp])
		{
			if(!visited[child])
			{
				q.push(child);
				level[child]=level[tp]+1;
			}
		}
	}
}
