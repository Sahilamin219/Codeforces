#include <bits/stdc++.h>
#define s(a) long (a.size())
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
ll n,m,k;
// vector<string> str;
int solve(ll m, vector<ll> v)
{
	return 0;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	f(i,0,n){
		cin>>a[i]>>b[i];
	}
	f(i,0,n){
		f(j,0,n){
			// cout<<j<<" "<<i<<" "<<a[j]<<" "<<b[i]<<" ";
			if(j!=i and a[j]==b[i]){
				a[j]=-1;//cout<<"---"<<endl;
			}
		}
	}
	int ans=0;
	f(i,0,n)if(a[i]>-1)ans++;
	cout<<ans;
	return 0;
}
// cout.flush();
// fflush(stdout);