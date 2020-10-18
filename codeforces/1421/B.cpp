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
typedef vector<int> vi;
typedef vector<vi> vvi;
const int mxn=201;
int a[mxn][mxn];
void solve()
{
	int n;cin>>n;
	f(i,0,n)
	{
		f(j,0,n)
		{
			char inp;cin>>inp;
			a[i][j]=inp&1;
		}
	}
	int changes=0;
	changes = 2 - abs( a[0][1] + a[1][0] - a[n-1][n-2] - a[n-2][n-1] );
	int same_bit= a[0][1];

	if(same_bit == a[n-1][n-2] and same_bit == a[n-2][n-1])same_bit^=1;

	cout<<changes<<"\n";
	if(same_bit != a[0][1])cout<<1<<" "<<2<<endl;
	if(same_bit != a[1][0])cout<<2<<" "<<1<<endl;
	if(same_bit == a[n-1][n-2])cout<<n<<" "<<n-1<<endl;
	if(same_bit == a[n-2][n-1])cout<<n-1<<" "<<n<<endl;
}
int main() 
	{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	/*
	Your skin isn't paper, don't cut it 
	Your face isn't a mask, don't hide it 
	Your size isn't a book, don't judge it
	Your life isn't a film, don't end it
	*/
	int t;cin>>t;
	while(t--){ solve(); }
}
// To the person reading this, you are beautiful and you look even prettier when you smile.
// I promise you will have a great day ahead.