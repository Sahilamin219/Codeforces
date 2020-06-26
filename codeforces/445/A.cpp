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
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount    __builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
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
ll n,m,k;
vector<string> str;
vector<string> visited;
// set<int> s;
// int dp[101][100001];
// int get(vector<int> v,int ind,int sum)
// {
// }
int solve(string s, int k){
	string A="RGB";
	ll a=s(s);
	f(i,0,3){
		ll dp[s(s)+1]={0};
		ll ind_A=i;
		f(j,1,s(s)+1){
			dp[j]=dp[j-1]+(s[j-1]!=A[ind_A%3]);
			if(j>=k){
				a=min(a,dp[j]-dp[j-k]);
			}
			ind_A++;
		}
		// for(auto x: dp)cout<<x<<" ";
		// 	cout<<endl;
	}
	return a;
}
void dfs(int i, int j){
	if(i<n and j<m and i>-1 and j>-1 and visited[i][j]=='0'){
		visited[i][j]='1';
		if(i+1<n and visited[i+1][j]=='0')dfs(i+1,j);
		if(j+1<m and visited[i][j+1]=='0')dfs(i,j+1);
		if(i-1>=0 and visited[i-1][j]=='0')dfs(i-1,j);
		if(j-1>=0 and visited[i][j-1]=='0')dfs(i,j-1);
		if(str[i][j]=='.'){
			str[i][j]='B';
			if(i-1>=0 and str[i-1][j]=='.'){
				str[i-1][j]='W';
				// visited[i-1][j]='1';
			}
			if(j-1>=0 and str[i][j-1]=='.'){
				str[i][j-1]='W';
				// visited[i][j-1]='1';
			}
			if(i+1<n and str[i+1][j]=='.'){
				str[i+1][j]='W';
				// visited[i+1][j]='1';
			}
			if(j+1<m and str[i][j+1]=='.'){
				str[i][j+1]='W';	
				// visited[i][j+1]='1';
			}
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// int t;cin>>t;
	int t=1;
	while(t--){
		cin>>n>>m;
		f(i,0,n){
			string s;
			cin>>s;
			str.pb(s);
		}
		f(i,0,n){
			f(j,0,m){
				if((i+j)&1 and str[i][j]=='.'){
					str[i][j]='B';
				}
				else if(str[i][j]=='.'){
					str[i][j]='W';
				}
			}
		}
		for(auto x: str)cout<<x<<"\n";
		// for(auto x: visited)cout<<x<<"\n";
	}
	// i=(i-1)%v.size();
	// v.erase(v.begin()+i, v.begin()+1+i);
	// (si == 0) ? cout<<1<<endl : cout<<si<<"\n";
	return 0;
}
// cout.flush();
// fflush(stdout);
// if(i!=l or (n+m)%2!=0)
// puts(flag?"NO":"YES");
// if(s-i>0 and find(v.begin(), v.end(), s-i)== v.end())