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
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount    __builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
#define sp cout<<" "
#define print() cout<<"\n";
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
#define resultv(v) accumulate(all(v),ll(0))
#define productv(v) accumulate(all(v), ll(1), multiplies< ll >())
#define difference(v) accumulate(all(v), ll(0), sum, std::minus<ll>()); 
#define vi(v,n) vector<long long int> v(n)
#define vvi(v,n,m) vector<vector<long long int> > v(n, vector<long long int> (m,0));
#define INF 0x3f3f3f3f
const ll inf=1e18+9;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
const int cons=501;
int get(ll a, vector<ll> v, ll l, ll h){
    if (a <= v[l])return l;
    if (a > v[h])return -1;
    ll mid=(l+h)/2;
    if(v[mid]==a or (mid+1<s(v) and v[mid]<a and v[mid+1]>=a))return (mid+1);
    else if(v[mid]==a or (mid-1>-1 and v[mid]>a and v[mid-1]<=a))return mid;
    else if(v[mid]>a) return get(a,v,l,mid);
    else {
        return get(a,v,mid,h);
    }
}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
void showdq(deque <int> g) {
    deque <int> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
bool seive[100005];
void SieveOfEratosthenes(ll n)
{ memset(seive, true, sizeof(seive)); for (ll p=2; p*p<=n; p++) if (seive[p] == true) for (ll i=p*p; i<=n; i += p) seive[i] = false;}
ll ncr(ll n,ll m){
    ll ans=1;m=max(m,n-m);
    f(i,1,n-m){
        ans=(ans*(m+i))/i;
    }
    return ans;
}
// void shortest (int i, vector<int> path)
// {
// 	if (i!=1) shortest(path[i], path);
// 	cout<<i<<' ';
// }
struct point//(int a, int b)
{
	int x;
	int y;
};
/*

~_^

*/
int32_t main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	// freopen("error.txt", "w", stderr);
	#endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int T;cin>>T;
	while(T--)
	{
		string s;cin>>s;
		int n=s(s);
		int t=0;
		int x=0,y=0;
		int fx=0,fy=0;
		// vector<pair<point, point>> v;
		// map<pair<point, point>, bool> m;
		map<pair<pair<int,  int>, pair<int, int>>, bool > m;
		f(i,0,n)
		{
			if(s[i]=='N'){fy+=1;}
			else if(s[i]=='S'){fy-=1;}
			else if(s[i]=='E'){fx+=1;}
			else{fx-=1;}
			// point p1;
			// p1.x=fx;
			// p1.y=fy;
			// point p2;
			// p2.x=x;
			// p2.y=y;
			pair<int, int> p1;
			pair<int, int> p2;
			p1 = {fx,fy};
			p2 = {x,y};
			// int f=1;
			// for(i=0;i<v.size();i++)
			// {if(p1.x==v[i].first.x and p2.x==v[i].second.x and p1.y==v[i].first.y and p2.y==v[i].second.y){t+=1;f=0;break;}}
			// if(f){t+=5;}
			// v.pb(mkp(p1,p2));
			// v.pb(mkp(p2,p1));
			if(m[{p1,p2}]){t+=1;}
			else{t+=5;}
			m[{{x,y}, {fx,fy}}]=true;
			m[{{fx,fy}, {x,y}}]=true;
			x=fx;y=fy;
		}
		// for(auto x:v){cout<<x.first.x<<" "<<x.first.y<<"-"<<x.second.x<<" "<<x.second.y<<endl;}
		cout<<t<<endl;
	}
	// ll n,m;cin>>n>>m;
	// vector<vector<ll>> dij(n+1);
	// map<pair<ll, ll>, ll> maping;
	// f(i,0,m)
	// {
	// 	ll a,b,w;cin>>a>>b>>w;
	// 	dij[a].pb(b);
	// 	dij[b].pb(a);
	// 	maping[{a,b}]=w;
	// 	maping[{b,a}]=w;
	// }
	// priority_queue<ll> q;
	// vector<ll> path(n+1);
	// vector<ll> dis(n+1, inf);
	// q.push(1);
	// dis[0]=0;
	// dis[1]=0;
	// while(!q.empty())
	// {
	// 	ll k=q.top();
	// 	q.pop();
	// 	auto i=dij[k].begin();
	// 	for(;i!=dij[k].end();i++)
	// 	{
	// 		ll z=*i;
	// 		if(dis[z]>dis[k]+maping[{k,z}])
	// 		{
	// 			dis[z]=dis[k]+maping[{k,z}];
	// 			path[z]=k;
	// 			q.push(z);
	// 		}
	// 	}
	// }
	// if(dis[n]==inf)
	// {
	// 	cout<<-1<<endl;
	// }
	// else
	// {
	// 	// shortest(n,path);
	// 	vector<ll> ans;
	// 	ll end=n;
	// 	while (end!=0){ans.pb(end),end=path[end];}
	// 	reverse(ans.begin(),ans.end());
	// 	for (auto it:ans)cout<<it<<" ";
	// }

	// for(auto x: s)cout<<x<<" ";
	// print()//std::string.find("string to find")!=std::string::npos
	// cout<<s(s);
	// cin>>n>>m;
	// f(i,0,n){
	// 	string s;cin>>s;
	// 	v.push_back(s);
	// }
	// // for(auto x: v)cout<<x<<endl;
	return 0;
}
/*
    'Cause I got issues
    But you got 'em too
    So give 'em all to me
    And I'll give mine to you
    Bask in the glory
    Of all our problems
    'Cause we got the kind of love
    It takes to solve 'em
*/
// https://codeforces.com/problemset/problem/538/C
// https://codeforces.com/problemset/problem/762/B
// https://codeforces.com/problemset/problem/300/B
// https://codeforces.com/contest/1283/problem/b
// void bfs(ll n,ll par,ll h)
// {
//     dp[n]=1;
//     for(auto it:v[n])
//     {
//         if(it==par)
//             continue;
//         bfs(it,n,h+1);
//         dp[n]+=dp[it];
//     }
//     // cout<<h<<" "<<n<<" "<<dp[n];
//     // ln;
//     he.pb({h-dp[n]+1,n});
// }
// int main()
// {
//     fast;
//     ll n;
//     cin>>n>>k;
//     ll i;
//     for(i=0;i<n-1;i++)
//     {
//         ll x,y;
//         cin>>x>>y;
//         v[x].pb(y);
//         v[y].pb(x);
//     }
//     ll sum=0;
//     bfs(1,-1,0);
//     sort(all(he));
//     reverse(all(he));
//     for(i=0;i<k;i++)
//     {
//         sum+=he[i].fi;
//         // cout<<sum;
//     }
//     cout<<sum;
// }
//itao-----
// long int stol (const string&  str, size_t* idx = 0, int base = 10)