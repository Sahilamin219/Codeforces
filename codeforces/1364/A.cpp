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
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		ll n,x;cin>>n>>x;
		vector<ll> v(n);
		f(i,0,n)cin>>v[i];
		ll f=0;
		ll allvalues=0;
		ll s=0;ll last_sum=0;
		ll e=0;ll firstsum=0;
		f(i,0,n){
			allvalues+=v[i];
		}
		f(i,0,n){
			firstsum+=v[i];
			if(firstsum%x!=0){
				f=1;
				s=i;
				break;
			}
		}
		string get="me";
		int flag=0;
		bool my_flag=false;
		f(i,0,n){
			last_sum+=v[n-i-1];
			if(last_sum%x!=0){
				e=i;
				f=1;
				break;
			}
		}
		if(allvalues%x!=0){
			cout<<n<<"\n";
		}
		else if(f==1){
			cout<<n-min(s,e)-1<<"\n";
		}
		else{
			cout<<-1<<"\n";
		}
	}
	return 0;
}