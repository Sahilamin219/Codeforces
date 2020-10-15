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

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{return (a.second < b.second);}
static bool mysort(pair<int, int>& a, pair<int, int>& b)
{ return a.second==b.second?a.first<b.first:a.second<b.second;}

vi visited(5001, 0);
ll n,d;

ll find_dis(vi points[], ll a, ll b)
{
	ll wgt=0;
	for(int i=0;i<d;i++)
	{
		wgt+=abs(points[a][i]-points[b][i]);
	}
	return wgt;
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
	while(t--)
	{
		int n;cin>>n;
		string s;cin>>s;
		int steps=0;
		int pos=n-1;
		int bank=0;
		while(pos>=0)
		{
			char last_bit=s[pos];
			int size=0;
			while(pos>=0 and last_bit==s[pos]) { pos--;size++; }
			bank+=(size-1);
			steps++;
			if(bank>0 and pos==-1)break;
			if(bank>0)bank--;
			else pos--;
		}
		cout<<steps<<endl;
	}
}
// To the person reading this, you are beautiful and you look even prettier when you smile.
// I promise you will have a great day ahead.