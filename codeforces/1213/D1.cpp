#include <bits/stdc++.h>
#define int long long
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define popf pop_front
#define pf push_front
#define popb pop_back
#define mp make_pair
#define pb push_back
#define remove erase
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
const double DINF = numeric_limits<double>::infinity();
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
#define mod 1000000009
#define INF 0x3f3f3f3f;
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
int max3(int a, int b, int c){return max(a, max(b,c));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return (hash1 ^ hash2);
    }
};
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.second==b.second){return (a.first > b.first);}
    return a.second>b.second;
}
bool cmp(pair<int, int>& a, pair<int, int>& b) 
{ 
    return a.second < b.second; 
} 
template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second < b.second;
    }
};
const int maxn = (2e5 + 5);
void solve_me()
{
	int n,k;cin>>n>>k;
	vi v(n);
	// map<int, int> m;
	int maxi=0;
	for(auto &i:v)cin>>i, maxi=max(maxi, i);
	int ans=INF;
	vector<multiset<int>> cnt( maxi+1, multiset<int>());
	for(auto x:v)
	{
		int c=0;
		while(x)
		{
			cnt[x].insert(c++);
			x/=2;
		}
		cnt[0].insert(c);
	}
	for(int i=0;i<cnt.size();i++)
	{
		if(cnt[i].size() < k)continue;
		int times=0;
		int total=0;
		for(auto x:cnt[i])
		{
			total += x;
			times++;
			if(times >= k)break;
		}
		ans = min (ans, total);
	}
	cout<<ans<<"\n";
	// vector<int> v={2,2,2};
	// cout<<v[upper_bound(all(v), 2, greater<int>()) - v.begin()];
	// cout<<upper_bound(all(v), 2, greater<int>()) - v.begin();
	return;
}

int32_t main( )
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	int tt = clock();
	#endif
	// cout << fixed << setprecision(18);
	int Testcase=1;//assert(cin>>Testcase);
	while(Testcase--)solve_me();
	#ifndef ONLINE_JUDGE
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
	#endif
	return 0;
}
// https://codeforces.com/contest/977/problem/D
// https://codeforces.com/contest/977/problem/E
// ---https://codeforces.com/contest/604/problem/C
// ---https://codeforces.com/contest/490/problem/B
// https://codeforces.com/gym/102697/problem/175