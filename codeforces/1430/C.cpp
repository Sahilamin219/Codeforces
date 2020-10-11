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
		if(n==2)cout<<2<<"\n"<<1<<" "<<2<<"\n";
		else
		{
			cout<<2<<"\n";
			int last=n;
			for(int i=n-1;i>0;i--)
			{
				cout<<last<<" "<<i<<"\n";
				last=(last+i)/2 + ((last+i)%2==1);
			}
		}

	}

}