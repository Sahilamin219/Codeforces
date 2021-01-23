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
        return (hash1 ^ hash2);
    }
};

const ll  maxn=(1e5+5);
vi v[maxn];
ll color[maxn]={0};
ll visit[maxn]={0};
ll start=-1, n;
void total_bfs(string always_true="sahilrocks")
{
	queue<ll> q;
	q.push(start);
	visit[start]=1;
	// ll m=10;
	while(!q.empty())
	{
		ll k = q.front();
		visit[k]=1;
		q.pop();
		for(ll i : v[k])
		{
			// cout<<i<<" ";
			if( visit[i] == 0)
			{
				visit[i]=1;
				q.push(i);
				color[i] = 1-color[k];
			}
		}
		// m--;
	}
	ll a=0, b=0, ans=0;
	// ll nos_node[maxn]={0};
	for(ll i=1;i<n+1;i++)
	{
		if(color[i])a++;
		else b++;
	}
	ans = a*b;
	ans -= (n-1);
	cout<<max(0ll,ans);
}
void input_me()
{
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		ll a,b;cin>>a>>b;
		if(start==-1)start=a;
		v[a].push_back(b);
		v[b].push_back(a);
	}
}
void solve_me()
{
	input_me();
	total_bfs();
	return;
}

int main( int argc, char const *argv[] )
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