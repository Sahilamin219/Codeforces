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
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount    __builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
#define print() cout<<"\n";
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
#define vi(v,n) vector<long long int> v(n)
#define vvi(v,n,m) vector<vector<long long int> > v(n, vector<long long int> (m,0));
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//freopen("error.txt", "w", stderr);
	#endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	vector<vector<int>> v(n, vector<int> (m,100001));
	vector<int> a(100012,0);//a[2]=1;a[3]=1;
	f(i,2,100012)
	{
		int store_i=i;
		// f(j,2,pow(i+1,0.5))
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0){i=0;}
		}if(i)a[store_i]=1;
		i=store_i;
	}
	f(i,0,n)
	{
		f(j,0,m)
		{
			int temp;cin>>temp;int add=0;
			while(not a[temp] and temp<100012)
			{
				add++;temp++;
			}
			v[i][j]=add;
		}
	}
// 	for(auto x:v){for(auto y:x){cout<<y<<" ";}cout<<endl;}
	int ans=INF;
	f(i,0,n)
	{
		int loc_Ans=0;
		f(j,0,m)
		{
			loc_Ans+=v[i][j];
		}
		ans=min(ans,loc_Ans);
	}
	f(j,0,m)
	{
		int loc_Ans=0;
		f(i,0,n)
		{
			loc_Ans+=v[i][j];
		}
		ans=min(ans,loc_Ans);
	}
	cout<<ans<<"\n";
	//don't know whats going in eveyone's life
	return 0;
}