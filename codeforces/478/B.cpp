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
	ll n,m;cin>>n>>m;
	if(m==1){
		cout<<cr(n,2)<<" "<<cr(n,2);
	}
	else{
		cout<<((n/m)*(n/m - 1)/2)*(m) + (n%m)*(n/m)<<" "<<cr(n-m+1,2);
	}
	return 0;
}
//min :
// cr(n/m) to hona hi hai fir
// bachai hai (n%m) unko ek ek kr ka dlan hai
//to agar unka dala hota to cr(n/m + 1) lagta
//bas cr(n/m +1)*(n%m) == (cr(n/m)+x)*(n%m) sai x nikalna hai ...