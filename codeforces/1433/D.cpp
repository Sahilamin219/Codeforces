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
map<string, vector<string>>  m;
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
    for (auto x: m[s])
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
 
bool dfs2(vector<string> v, vvi& vis2, int i, int j)
{
	// cout<<i<<" "<<j<<endl;
	if(i>=n or j>=n)return false;
	if(i<0 or j<0)return false;
	if(i==n-1 and j==n-2)return true;
	if(i==n-2 and j==n-1)return true;
	vis2[i][j]=1;
	if(i<n-1 and v[i+1][j]=='0' and !vis2[i+1][j])
	{
		if(dfs2(v, vis2, i+1, j))return true;
	}
	if(j<n-1 and v[i][j+1]=='0' and !vis2[i][j+1])
	{
		if(dfs2(v, vis2, i, j+1))return true;
	}
	if(i>0 and v[i-1][j]=='0' and !vis2[i-1][j])
	{
		if(dfs2(v, vis2, i-1, j))return true;
	}
	if(j>0 and v[i][j-1]=='0' and !vis2[i][j-1])
	{
		if(dfs2(v, vis2, i, j-1))return true;
	}
	return false;
}
const int mxn=201;
int a[mxn][mxn];
void solve()
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
	ll t;cin>>t;
	while(t--)
	{
		string r=R"(
		ll n;cin>>n;
		vi v(n);
		f(i,0,n)cin>>v[i];
		vector<pair<ll, ll>> p;
		vector<ll> viste(n,0);
		ll total_edges=-1, next=0;
		ll i=0,j=1;
		while(next<n-1)
		{
			// total_edges=next;
			ll flag=1;
			if(!viste[i])
			{
				ll cnt=0;
				while(v[i]==v[j])
				{
					j++;
					j=j%n;
					if(j==i)j++;
					j=j%n;
					cnt++;
					if(cnt>2*n) { flag=0;break; }
				}
				viste[i]=1;
				if(flag) { next++; p.push_back( {i+1, j+1} ); }
				if(!flag) {break;}
			}
			i++;
			i=i%n;
		}
		if(count(all(viste),0) == 1)
		{
			cout<<"YES\n";
			f(i,0,sz(p))
			{
				cout<<p[i].first<<" "<<p[i].second<<"\n";
			}
		}
		else
		{
			cout<<"NO\n";
		})";
		ll n;cin>>n;
		map<ll, vector<ll>> m;
		ll maxi=-1,mini=1e9+1;
		vector<pair<ll, ll>> pv;
		vector<ll> v;
		f(i,0,n)
		{
			ll val;cin>>val;
			maxi=max(maxi, val);
			mini=min(mini, val);
			m[val].push_back(i+1);
			pv.push_back( {val, i+1 } );
			v.push_back(val);
		}
		if(maxi==mini)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		auto it=m.begin();
		vector<ll> store_fixed = it->second;
		ll fixed = store_fixed[0];
		it++;
		vector<ll> changing = it->second;
		ll last_stored;
		for(;it!=m.end();it++)
		{
			for(ll x:it->second)
			{
				cout<<fixed<<" "<<x<<endl;
				last_stored=x;
			}
		}
		f(i,1,sz(store_fixed))cout<<last_stored<<" "<<store_fixed[i]<<endl;
		// ll counting=n;
		// ll j=0;
		// set<ll> s;
		// ll last=0;
		// while(counting>1ll)
		// {
		// 	last=s.size();
		// 	while(last==s.size())
		// 	{
		// 		s.insert(v[j]);
		// 		j++;
		// 	}
		// 	f(i,0,n)
		// 	{
		// 		if(v[i]!=v[j] and i+1!=j)
		// 		{
		// 			cout<<i+1<<" "<<j<<endl;counting--;
		// 			if(counting<=1ll)break;
		// 		}
		// 	}
		// }
	}
}
// To the person reading this, you are beautiful and you look even prettier when you smile.
// I promise you will have a great day ahead.