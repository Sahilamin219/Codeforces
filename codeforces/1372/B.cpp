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
int chk(ll n)
{
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//don't know whats going on in eveyone's life
	// SieveOfEratosthenes(100000001);
	int t;cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n%2==0){
			cout<<n/2<<" "<<n/2<<endl;
		}
		else
		{
			if(chk(n))//chk if prime
			{
				cout<<1<<" "<<n-1<<endl;
			}
			else{
				// ll k=(n/2);
				// while(n%k!=0)
				// {
				// 	k--;
				// }
				vector<ll> v;
				ll k=-1;
				for(ll i=2;i*i<=n;i++)
				{
					if(n%i==0){
						v.pb(i);
						if(i!=(n/i))v.pb(n/i);
					}
				}
				for(ll i=0;i<s(v);i++)
				{
					if(v[i]>(n/2))k=v[i-1];
				}
				sort(all(v));
				k=v[s(v)-1];
				// for(auto x: v)cout<<x<<" ";
				cout<<k<<" "<<n-k<<endl;
			}
		}
	}
	return 0;
}