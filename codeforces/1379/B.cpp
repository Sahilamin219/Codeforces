// You can neither do charity of goodness to wealthy people nor increase the water of rain in the sea of arrogance
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
^.^
^_^
~_^
o_o
*/

ll l,r,m;
ll A,B,C;
ll check(ll n , ll a)
{
	if(n<1)return 0;
	int diff=(m-(n*a));
	if(abs(diff)>abs(r-l))return 0;
	A=a;
	if (diff > 0)
	{
		C = l; B = l + diff;
	}
	else
	{
		C  = r, B = r - abs(diff);
	}
	return 1;
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	// freopen("error.txt", "w", stderr);
	#endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--)
	{
		cin>>l>>r>>m;
		for(int a=l;a<=r;a++)
		{
			int n=(m/a);
			if(check(n,a))
			{
				cout<<A<<" "<<B<<" "<<C<<endl;
				break;
			}
			if(check(n+1,a))
			{
				cout<<A<<" "<<B<<" "<<C<<endl;
				break;
			}
			if(check(n-1,a))
			{
				cout<<A<<" "<<B<<" "<<C<<endl;
				break;
			}
		}
	}
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