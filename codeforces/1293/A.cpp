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
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
string gg="abcdefghijklmnopqrstuvwxyz";
string gv="aeiouy";//"AOYEUI";
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if(a.first==b.first){
        return a.second<b.second;
    }// return (a.second<b.second);
    return (a.first>b.first);
    return false;
}
string reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
    return str;
} 
vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}
// ll n,m,k;
// vector<string> str;
// set<int> s;
// int dp[101][100001];
// int get(vector<int> v,int ind,int sum)
// {
// }
vector<int> solve(int n){
	vector<int> a(3,0);
	int i=0;
	while(n){
		a[i]=(n%2);i++;
		n/=2;
	}
	reverse(a.begin(), a.end());
	// for(auto x: a)cout<<x<<" ";
				// cout<<endl;
	return a;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		ll n,s,k;cin>>n>>s>>k;
		vector<ll> v(k);
		f(i,0,k)cin>>v[i];
		f(i,0,2*k+1){
			if(s-i>0 and find(v.begin(), v.end(), s-i)== v.end()){
				// cout<<s-i<<endl;break;
				cout<<i<<endl;break;
			}
			if(s+i<=n and find(v.begin(), v.end(), s+i)== v.end()){
				// cout<<s+i<<endl;break;
				cout<<i<<endl;break;
			}
		}
	}
	// (si == 0) ? cout<<1<<endl : cout<<si<<"\n";
	return 0;
}
// cout.flush();
// fflush(stdout);
// if(i!=l or (n+m)%2!=0)
// puts(flag?"NO":"YES");