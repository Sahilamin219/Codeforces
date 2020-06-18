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
		int n;cin>>n;
		vector<int> v(n);
		f(i,0,n)cin>>v[i];
		int cnt=0,bnt=0;
		f(i,0,n){
			if(v[i]%2!=i%2 and i%2==0){
				cnt++;
			}
			if(v[i]%2!=i%2 and i%2==1){
				bnt++;
			}
		}
		if(cnt!=bnt)cout<<-1<<endl;
		else{
			cout<<cnt<<endl;
		}
	}
	return 0;
}
// cout.flush();
// fflush(stdout);