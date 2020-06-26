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
#define zrobits(x)	__builtin_ctzll(x)
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
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// int t;cin>>t;
	int t=1;
	while(t--){
		int n;cin>>n;
		vector<int> v(n);
		f(i,0,n)cin>>v[i];
		vector<int> b(n,-1);
		vector<int> a(2*n + 1, -1);
		a[0]=1;
		if(v[0]==1){
			b[0]=0;
			a[0]=1;
		}
		f(i,1,n){
			if(v[i]-v[i-1]!=0){
				b[i]=v[i-1];
				a[b[i]]=1;
			}
		}
		a[v[n-1]]=1;
		int l=v[0];
		f(i,0,n){
			if(b[i]==-1){
				while(a[l]==1){
					l++;
				}
				b[i]=l;
				a[l]=1;
			}
		}
		for(auto x: b)cout<<x<<" ";
	}
	return 0;
}