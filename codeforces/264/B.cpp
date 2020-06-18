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
	int n;cin>>n;
	vector<int> v(n);
	f(i,0,n)cin>>v[i];
	vector<int> dp(100001,0);
	f(i,0,n){
		vector<int> div;
		int mx=0;
		f(j,2,sqrt(v[i])+1){
			if(v[i]%j==0){
				if(v[i]!=j){
					div.push_back(v[i]/j);
					div.push_back(j);
					mx=max(dp[j],mx);
					mx=max(dp[v[i]/j], mx);
				}
				else{
					div.push_back(j);
					mx=max(dp[j],mx);
				}
			}
		}
		if(s(div)<=1)dp[v[i]] = mx + 1;
		// for(auto x:div)cout<<x<<" ";
		// cout<<"\t";
		f(j,0,s(div)){
			dp[div[j]]=mx+1;
			// cout<<dp[div[j]]<<" ";
		}//cout<<endl;
	}
	cout<<*max_element(dp.begin(), dp.end())<<endl;
	return 0;
}
// cout.flush();
// fflush(stdout);