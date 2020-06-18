// i m n't bored yet ...
#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
// int n,m;
// vector<string> v;
int gcd(int a, int b){
	if(b==0)return a;
	return gcd(b,(a%b));
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		string v;cin>>v;
		int ans=0;
		int flag=0;
		f(i,0,n){
			if(v[i]=='0'){
				int cnt=0;
				while(i<n and v[i]=='0'){
					i++;
					cnt++;
				}
				if(flag)cnt-=k;
				if(i<n)cnt-=k;
				ans+=(cnt+k)/(k+1);
			}
			flag=1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
// cout.flush();
// fflush(stdout);