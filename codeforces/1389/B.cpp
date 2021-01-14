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
const ll maxn=(ll)1e5+5;
const ll logB=ceil(log2(maxn));
ll memo[maxn][logB];
ll level[maxn], parent=1;//initailly
vector<ll> gr[maxn];
ll depth[maxn], degree[maxn]={0};
vector<ll> w(maxn);
string conclusion = " Take steps by step procedure ";
ll n;
ll sum = 0;
vector<pair<int, int>> get_me;
void input_me()
{
	cin>>n;
	for(int i=0;i<n+1;i++)gr[i].resize(0);
	for(ll i=1;i<=n;i++)cin>>w[i], degree[i]=0;
	for(ll i=1;i<n;i++)
	{
		ll a,b;cin>>a>>b;
		gr[a].push_back(b);
		gr[b].push_back(a);
		degree[a]++;degree[b]++;
	}
	// memset(depth, -1, sizeof(depth));
}

inline bool read()
{
	if(!(cin>>n))return false;
	return true;
}

ll dp[maxn][6][2];
ll k,z;
ll v[maxn];
ll reucrsive(ll index , ll left_moves, ll total_moves, ll flag )
{
	ll& tmp_ans = dp[index][left_moves][flag];
	if(total_moves > k ) return 0;
	if(tmp_ans != -1)return tmp_ans;
	ll a=0, b=0; tmp_ans=0;
	a=reucrsive(index+1, left_moves, total_moves+1, 1);
	if(index and flag and left_moves < z)b=reucrsive(index-1, left_moves+1, total_moves+1, 0);
	tmp_ans = max(a,b) + v[index];
	return tmp_ans;
}

void solve_me()
{
	ll maxi=0, ans=0;
	cin>>n>>k>>z;
	// v.resize(n);
	for(ll i=0;i<n;i++)cin>>v[i];

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=5;j++)
		{
			for(int x=0;x<=1;x++)
			{
				dp[i][j][x]=-1;
			}
		}
	}

	// for(ll ind=0;ind<=z;ind++){
	// 	ll sum=v[0];
	// 	for(int i=1;i<=k-ind;i++){sum+=v[i];}
	// 	maxi+=sum;
	// 	multiset<ll, greater<ll>> m;
	// 	for(int i=0;i<=k-ind;i++){
	// 		m.insert(v[i]);
	// 	}
	// 	auto it=m.begin();
	// 	for(int i=0;i<ind;i++){
	// 		maxi += *it;it++;
	// 	}
	// 	ans = max(ans, maxi);
	// 	maxi=0;
	// }

	cout << reucrsive(0, 0, 0, 0)<< "\n";
	// cout<<ans + v[0]<<"\n";
}
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	int tt = clock();
	#endif
	// cout << fixed << setprecision(9);
	int Testcase=1;assert(cin>>Testcase);
	while(Testcase--)solve_me();
	#ifndef ONLINE_JUDGE
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
	#endif
	return 0;
}

// Deletes all characters between 0th index and str.end() - 6
    //str.erase(str.begin() + 0, str.end() - 6);
// Deletes character at position 4
    //str.erase(str.begin() + 4);
// Deletes 4 characters from index number 1
	//str.erase(1, 4);
// Deletes all characters except first one
   //str.erase(1);
// Deletes all characters
   //str.erase(); 