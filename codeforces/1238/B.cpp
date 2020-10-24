//----------------------------- "We can make it all red"----------------------
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
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {return (a.second < b.second);}
static bool mysort(pair<int, int>& a, pair<int, int>& b){ return a.second==b.second?a.first<b.first:a.second<b.second;}
template<typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
struct cmp {
    bool operator() (pair<int, int> a, pair<int, int> b) {
         return a.first+a.second > b.first+b.second;
    }
};
template <typename S, typename T>
ostream &operator<<(ostream &out, const pair<S, T> &p)
{
    out << "{" << p.ff << ", " << p.ss << "}";
    return out;
}
template <typename T>
ostream &operator<<(ostream &out, const vector<T> &v)
{
    out << "[";
    for (int i = 0; i < (int)v.size(); i++)
    {
        out << v[i];
        if (i != (int)v.size() - 1)
            out << ", ";
    }
    out << "]";
    return out;
}
int find_index(string str, string s){
    vector<int> v;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, s.length()) == s) {
            v.push_back(i);
        }
    }
    return v.size();
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
	int q;cin>>q;
	while(q--)
	{
		int n,r;cin>>n>>r;
		vi v(n);
		f(i,0,n)cin>>v[i];
		ll ans=0;
		sort(all(v));
		auto it=unique(v.begin(), v.end());
		v.resize(distance(v.begin(), it));
		for(int i=v.size()-1;i>=0;i--)
		{
		    ans++;
		    if( v[i-1] <= r*ans )
		    {
		        cout<<ans<<"\n";
		        goto skip;
		    }
		}
		cout<<v.size()<<endl; // or cout<<ans<<endl;
		skip:;
	}
	return 0;
}