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
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
#define vi(v,n) vector<long long int> v(n)
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	// int t=1;
	while(t--){
		int n,k;cin>>n>>k;
		vector<ll> v(n);
		f(i,0,n)cin>>v[i];
		f(i,0,n)v[i]=v[i]%k;
		sort(all(v));
		vector<ll> ans(n);
		if(v[0])ans[0]=k-v[0];
		else{
			ans[0]=0;
		}
		f(i,1,n){
			if(v[i] and v[i]!=v[i-1]){
				ans[i]=k-v[i];
			}
			else if(v[i]%k and v[i]==v[i-1]){
				ans[i]=(ans[i-1]+k);
			}
			else{
				ans[i]=0;
			}
		}
		// for(auto x: ans)cout<<x<<" ";
		// 	cout<<"\n";
		if(*max_element(all(ans)))cout<<*max_element(all(ans))+1<<endl;
		else{
			cout<<0<<"\n";
		}
	}
	return 0;
}