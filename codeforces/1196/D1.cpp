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
#define bitcount    __builtin_popcountll
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
int solve(string s, int k){
	string A="RGB";
	ll a=s(s);
	f(i,0,3){
		ll dp[s(s)+1]={0};
		ll ind_A=i;
		f(j,1,s(s)+1){
			dp[j]=dp[j-1]+(s[j-1]!=A[ind_A%3]);
			if(j>=k){
				a=min(a,dp[j]-dp[j-k]);
			}
			ind_A++;
		}
		// for(auto x: dp)cout<<x<<" ";
		// 	cout<<endl;
	}
	return a;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		cout<<solve(s,k)<<"\n";
	}
	// i=(i-1)%v.size();
	// v.erase(v.begin()+i, v.begin()+1+i);
	// (si == 0) ? cout<<1<<endl : cout<<si<<"\n";
	return 0;
}
// cout.flush();
// fflush(stdout);
// if(i!=l or (n+m)%2!=0)
// puts(flag?"NO":"YES");
// if(s-i>0 and find(v.begin(), v.end(), s-i)== v.end())