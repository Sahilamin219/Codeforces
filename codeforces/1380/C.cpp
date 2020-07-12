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
#define INF 0x3f3f3f3f;
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
ll fun(vector<ll> v,ll i)
{
	if(s(v)==1)return v[0];
	ll a,b;ll ai,bi;
	if(i==s(v)-1){b=v[0];bi=0;}
	else{b=v[i+1];bi=i+1;}
	if(i==0){a=v[s(v)-1];ai=s(v)-1;}
	else{a=v[i-1];ai=i-1;}
	vector<ll> d(v);
	d.erase(d.begin()+ai, d.begin()+ai+1);
	d.erase(d.begin()+bi, d.begin()+bi+1);
	d[i]=a+b;
	return max(fun(d,i),fun(v,i+1));
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//freopen("error.txt", "w", stderr);
	#endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//don't know whats going on in eveyone's life
	int t;cin>>t;
	while(t--)
	{
		ll n,x;cin>>n>>x;
		vector<ll> v(n);f(i,0,n)cin>>v[i];
		sort(v.rbegin(), v.rend());
		int cnt=0;
		f(i,0,n)
		{
			if(v[i]>=x)cnt++;
			else
			{
				int len=1;ll mi=v[i];
				while(len*mi<x and i<n)
				{
					len++;
					mi=min(mi,v[i+1]);
					i++;
				}
				if(i!=n)cnt++;
			}
		}
		cout<<cnt<<endl;
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