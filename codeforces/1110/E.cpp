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
#define mod 1000000007;
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
ll is_permutation(vector <ll> A, vector <ll> B)
{
    sort(all(A));
    sort(all(B));
    int is_equal = (A.size() == B.size() ? true : false);
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] != B[i])
        {
            is_equal = false;
        }
    }
    return is_equal;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//freopen("error.txt", "w", stderr);
	#endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	vector<ll> a(n),b(n);
	f(i,0,n)cin>>a[i];
	f(i,0,n)cin>>b[i];
	// sort(all(a));sort(all(b));
	vector<ll> d1,d2;
	f(i,0,n-1)d1.pb(a[i+1]-a[i]);
	f(i,0,n-1)d2.pb(b[i+1]-b[i]);
	sort(all(d1));sort(all(d1));
	// f(i,0,n){if(d1[i]==d2[i]){continue;}else{cout<<"NO"<<endl;goto skip;}}
	// cout<<"YES"<<endl;
	// skip:
	cout << (a[0] == b[0] && is_permutation(d1, d2) ? "Yes\n" : "No\n");
	return 0;
}