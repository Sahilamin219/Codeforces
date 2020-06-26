#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define fi first
#define se second
#define pb push_back
#define mkp make_pair
#define pi pair<int,int>
#define mod 1000000007;
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount    __builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// int t;cin>>t;
	int t=1;
	while(t--){
	    ll n,m;
		cin>>n>>m;
		vector<int> a(n+1,0);
		f(i,0,n+1)a[i]=i;
		ll k=1;
		f(i,0,m){
			int c,d;cin>>c>>d;
			while(a[c]!=c)c=a[c];
			while(a[d]!=d)d=a[d];
			//isye check hota hai ki kiya parents same to nahi inke 
			//agar same hozate hai to yani reaction hozuki hai parent node ki
			//to miltiply by 2 nhi karna
			if(c!=d){
				k*=2;
				a[d]=c;//it connects parents of parent to the child
			}
		}
		cout<<k;
	}
	return 0;
}