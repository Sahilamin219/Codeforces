#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100000
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cerr<< #x << ':' << x << endl;
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define fit(it,c) for ( __typeof((c).begin()) it=(c).begin(); it!=(c).end(); it++ )
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
int main() {
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int c1=0,c2=0,c3=0;
		int ans1=0,ans2=0,ans3=0;
		c1=n/3;
		c2=n/5;
		c3=n/7;
		f(i,0,c1+1)
		{
			int m=n;
			m-=3*i;
			if(m==0){ans1=i;n=0;break;}
			f(j,0,c2+1)
			{
				m-=5*j;
				if(m==0){ans1=i,ans2=j;n=0;break;}
				f(k,0,c3+1)
				{
					m-=7*k;
					if(m==0){ans1=i,ans2=j;ans3=k;n=0;break;}
					m+=7*k;
				}
				m+=5*j;
				if(n==0)break;
			}
			if(n==0)break;
		}
		if(n==0)
		{
			cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}

}