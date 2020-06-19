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
long long int get(vector<long long int> v){
	ll x=1;
	f(i,0,s(v)){
		x=(x*v[i]);
	}
	return x;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long int n;cin>>n;
	string s="codeforces";
	vector<long long int> v(10,1);
	ll x=get(v);
	// cout<<x<<endl;
	int p=0;
	while(x<n){
		v[p%10]++;
		x=get(v);
		// cout<<x<<endl;
		p++;
	}
	// cout<<x<<endl;
	f(j,0,10){
		f(i,0,v[j]){
			cout<<s[j];
		}
	}
	return 0;
}
// cout.flush();
// fflush(stdout);