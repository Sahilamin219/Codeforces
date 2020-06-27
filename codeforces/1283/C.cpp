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
		int n;cin>>n;
		vector<int> v(n+1);
		vector<int> a;
		map<int,int> m;
		f(i,1,n+1){
			cin>>v[i];
			m[v[i]]=1;
		}
		f(i,1,n+1)if(m[i]==0)a.pb(i);
		a.pb(a[0]);
		f(i,0,s(a)-1){
			while(v[a[i]]){
				a[i]=v[a[i]];//detectig zero in whole cycle
			}
			v[a[i]]=a[i+1];
			//v[a[i]] is the friend not knowing who shlould hw give gift
			//a[i+1] ..a is the vector with all unmapped freinds not getting gifts
		}
		for(int i=1;i<n+1;i++)cout<<v[i]<<" ";
		// for(auto x: visited)cout<<x<<"\n";
	}
	return 0;
}