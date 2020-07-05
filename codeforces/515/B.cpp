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
long long int cr(ll n,ll r){
	return (n*(n-1)/2);
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	int nb,ng;cin>>nb;
	vector<ll> b(n,0),g(m,0);
	f(i,0,nb){
		int a;cin>>a;
		b[a%n]=1;
	}
	cin>>ng;
	f(i,0,ng){
		int a;cin>>a;
		g[a%m]=1;
	}
	int temp=__gcd(n,m);
	vector<int> gc(temp,0);
	f(i,0,(n+m)){
		if(i<n and b[i%n]==1){
			gc[i%temp]=1;
		}
		else if(i>=n and g[i%m]==1){
			gc[i%temp]=1;
		}
	}
	puts((*min_element(all(gc))==0)?"No" : "Yes");
	// for(auto x: s)cout<<x<<" ";
	// 	print()//std::string.find("string to find")!=std::string::npos
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
// #include <bits/stdc++.h>
// #include<limits.h>
// #include<stdio.h>
// #include<cstring>
// #include<string>
// using namespace  std;
// typedef long long ll;
// typedef long double ld;
// #define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
// #define pb push_back
// #define mp make_pair
// #define sz(a) a.size()
// #define fi first
// #define se second
// #define rsz(a,n) a.resize(n)
// #define test(t) ll t;cin>>t;while(t--)
// #define forn(i,e) for(int i = 0; i < e; i++)
// #define forsn(i,s,e) for(int i = s; i < e; i++)
// #define rforn(i,s) for(int i = s; i >= 0; i--)
// #define rforsn(i,s,e) for(int i = s; i >= e; i--)
// #define fillv(a,k) memset(a,k,sizeof(a))
// #define leadzero(a) __builtin_clz(a) //count leading zeros
// #define trailzero(a) __builtin_ctz(a) //count trailing zeros
// #define bitcount(a) __builtin_popcount(a) // count set bits (add ll)
// #define ln cout<<endl
// #define sp cout<<" "
// #define spaceprint(a,i,s,n) {forsn(i,s,n) { cout<<a[i]; sp;}}
// #define lineprint(a,i,s,n) {forsn(i,s,n) {cout<<a[i]; ln;}}
// #define maxe(a) *max_element(a.begin(),a.end())
// #define maxi(a) max_element(a.begin(),a.end())-a.begin()
// #define mine(a) *min_element(a.begin(),a.end())
// #define mini(a) min_element(a.begin(),a.end())-a.begin()
// #define all(c) c.begin(),c.end()
// #define trav(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
// #define present(container, element) (container.find(element) != container.end())
// #define cpresent(container, element)  (find(all(container),element) != container.end())// check the presence of element
// //copy(from_begin, from_end, to_begin); copy function
// typedef unsigned long long int ull;
// typedef long double ld;
// typedef pair<ll,ll> p64;
// typedef pair<int,int> p32;
// typedef pair<int,p32> p96;
// typedef vector<ll> v64;
// typedef vector<string> vs;
// typedef vector<int> v32;
// typedef vector<v32> vv32;
// typedef vector<v64> vv64;
// typedef vector<p32> vp32;
// typedef vector<p64> vp64;
// typedef vector<vp32> vvp32;
// typedef map<int,int> m32;
// typedef map<ll,ll> m64;
// ll LIM = 1e5+5, MOD =  1e18+7;
// #define resultv(v) accumulate(all(v),ll(0))
// #define productv(v) accumulate(all(v), ll(1), multiplies< ll >())
// ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
// ll fastpowMOD(ll a, ll p,ll MOD){ if(p==0) return 1; ll z = fastpowMOD(a,p/2,MOD); z = (z*z)%MOD; if(p%2) z = (z*a)%MOD; return z; }
// bool seive[100005];
// void SieveOfEratosthenes(ll n)
// { memset(seive, true, sizeof(seive)); for (ll p=2; p*p<=n; p++) if (seive[p] == true) for (ll i=p*p; i<=n; i += p) seive[i] = false; }
// v64 v[200005];
// ll k;
// ll type[200005]={0};
// vp64 he;
// ll dp[200005]={0};
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
