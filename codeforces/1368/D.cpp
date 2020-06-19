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
	vector<long long int> v(n);
	f(i,0,n)cin>>v[i];
	vector<int> a(20,0);
	f(i,0,n){
		f(j,0,20){
			// cout<<(1<<j)<<" ";
			// cout<<(v[i]&(1LL<<j))<<" ";
			if(v[i]&(1LL<<j)){
				a[j]++;
			}
		}//cout<<endl;
	}
	// for(auto x:a)cout<<x<<" ";
	long long int ans=0;
	while(*max_element(a.begin(), a.end())>0){
		long long int add=0;
		f(i,0,20){
			if(a[i]>0){
				add+=(1LL<<i);
				a[i]--;
			}
		}
		// cout<<"add :"<<add<<"\n";
		ans+=(add*add);
		// for(auto x:a)cout<<x<<" ";
		// 	cout<<endl;
	}
	cout<<ans;
	return 0;
}
// cout.flush();
// fflush(stdout);