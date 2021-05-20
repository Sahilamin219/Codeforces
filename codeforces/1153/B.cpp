#include "bits/stdc++.h"
#define pb push_back
#define mkp make_pair
#define int long long

#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define zrobits(x)	__builtin_ctzll(x)
#define bitcount	__builtin_popcountll(x)
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
using namespace std;
#define resultv(v) accumulate(all(v),int(0))
#define removeDuplicates(a) a.resize(unique(all(a))-a.begin())
#define productv(v) accumulate(all(v), int(1), multiplies< int >())
#define difference(v) accumulate(all(v), int(0), std::minus< int >())
#define vi vector<int> 
#define pii pair<int, int> 
#define vvi vector<vi>
#define vpii vector<pii>
#define INF 0x3f3f3f3f
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
#define MAX_SIZE 12

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
inline int32_t add(int a, int b) { return a + b >= mod ? a + b - mod : a + b; }
inline int32_t mul(int a, int b) { return (a * 1ll * b % mod); }
inline void inc(int& a, int b) { a = add(a, b); }
int mpow(int n, int p)
{
	int res=1;
	while(p)
	{
		if(p&1)(res*=n)%=mod;
		(n*=n)%=mod,p/=2;
	}
	return res;
}
int zeroes(int dp[], int n)
    {
       unordered_map<int, int> mp;
       int count = 0;
       int sum = 0;
       for(int i = 0; i < n; i++)
       {
          sum += dp[i];
          if(sum==0)
          {
              count++;
          }
          if(mp.find(sum) != mp.end())
          {
              count += mp[sum];
          }
          mp[sum]++;
      }
      return count;
    }

int R=0, ans=0, n;
vector<vector<int>> dp;
int rec(int i, int sum){
	if(i>n)return 0;
	if(sum>R)return 0;
	if(sum==R){
		return 1;
	}
	if(dp[i][sum]!=-1)return dp[i][sum];
	dp[i][sum]=rec(i+1, sum) + rec(i+1, sum+i);
	return dp[i][sum];
}

void solve(){
	int n,m,h;
    cin >> n >> m >> h;
 
    vi a(m+1) ,b(n+1);
    for(int i=1 ;i<=m ;i++) cin >> a[i];   // front view
    for(int i=1 ;i<=n; i++) cin >> b[i];   //  left view
 
    int v[n+1][m+1];
    for(int i=1; i<=n ;i++){                //  top view
        for(int j=1; j<=m ;j++){
            cin >> v[i][j];
            // cout << b[i] << ' ' << a[j] << endl;
            if( v[i][j] == 1 ) v[i][j] = min({ h,b[i] ,a[j]});
        }
    }
 
    for(int i=1 ;i<=n ;i++){
        for(int j=1 ;j<=m ;j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
	// int n=3, m=3;
	// cin>>n;
	// vector<int> gr[n+1];
	// for(int i=0, vl;i<n;i++){
	// 	cin>>vl;
	// }

	/*vector<vector<int>> A( 3, vector<int> (3, 0));
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>A[i][j];
		}
	}
	for(int i = 0; i < m; i++)
    {
        int dp[n] = {0};
        cout<<i<<"\n";
        for(int j = i; j < m; j++)
        {
            for(int k = 0; k < n; k++)
            {
                dp[k] = dp[k] + A[k][j];
            }
            for(int x=0;x<n;x++){
        		cout<<dp[x]<<" ";
        	}cout<<"\n";
            ans = ans + zeroes(dp,n); 
        }
        cout<<"\n";
    }*/

/* 
	int n;cin>>n;
	string s, ans;cin>>s;
	int total=0;
	int rest=0;

	for(auto x:s){
		if(x=='(')total++;
		else if(x==')')total--;
		else rest++;
	}
	// res=5
	// total=2;
	// res = closing -> 2 openings/closing
	
	for(auto &x:s){
		if(x=='?'){
			if(total>0){
				x='(';
				total--;
			}
			else{
				x=')';
			}
			// else if(total==0){}
		}
	}
	// cout<<s<<" ";
		stack<char> mistake;
		for(auto x:s){
			if(x=='(')mistake.push(x);
			else{
				if(mistake.empty()){
					cout<<":(";return;
				}
				else mistake.pop();
			}
		}
		if(!mistake.empty()){
			cout<<":(";return;
		}
	cout<<s;
	*/


	/*int n, c;cin>>n>>c;
	multiset<int> ms;
	int sum=0;
	vector<int> dp(n+1);
	vector<int> v(n);
	for(auto &i:v)cin>>i;

	for(int i=1;i<=n;i++){
		sum += v[i-1];
		ms.insert(v[i-1]);
		if(i>c){
			sum -= v[i-c-1];
			ms.erase(ms.find(v[i-c-1]));
		}
		dp[i] = dp[i-1] + v[i-1];
		if( i - c >= 0){
			dp[i] = min( dp[i] , dp[i-c] + sum - *ms.begin() );
		}
	}
	cout<<dp[n]<<"\n";*/
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int t=1;//cin>>t;
	while(t--)solve();
	return 0;
}
// long int stol (const string&  str, size_t* idx = 0, int base = 10)
// result = std::accumulate(arr, arr + size, num, std::minus<int>()); 
// int equal(vector<int> arr) {
//	 auto min_ = *min_element(arr.begin(), arr.end());
//	 auto ans = numeric_limits<int>:: max();
//	 for(auto i=0;i<5;i++){
//		 auto operations = [min_,i](auto init, auto j){
//			 auto t = j-(min_-i);
//			 return init + t/5 + t%5/2 + t%5%2;
//		 };
//		 ans=min(ans,accumulate(arr.begin(), arr.end(), 0, operations));
//	 }
//	 return ans;
// }
// pair<long long,int> dfs(int node)
// {
// 	long long mx=0;
// 	int sz=1;
// 	for (int u:v[node])
// 	{
// 		auto tmp=dfs(u);
// 		mx=max(mx,tmp.first);
// 		sz+=tmp.second;
// 	}
// 	return {mx+sz,sz};
// }
// function<void(int,int)>dfs=[&](int i, int d){
// 	if(i==b){
// 		dab=d;return;
// 	}
// 	visited[i]=true;
// 	for(auto it:adj[i]){
// 		if(!visited[it])
// 			dfs(it,d+1);
// 	}
// };
// dfs(a,0);
// int dot=1;
// vector<bool> v(n+1,false);
// function<int(int)>diameter=[&](int i){
// 	int m1=0,m2=0;
// 	v[i]=true;
// 	for(auto it:adj[i]){
// 		if(!v[it]){
// 			int k=diameter(it);
// 			if(k>m1){
// 				m2=m1;
// 				m1=k;
// 			}
// 			else if(k>m2)
// 				m2=k;
// 		}
// 	}
// 	dot=max(m1+m2,dot);
// 	return 1+m1;
// };

void saifu(int node, int p)
{
	vector<int> others;
	int n=10, sub=1;
	int dp[10], dp2[10];
    if(others.max_size()>0){
	    if(p!=-1) others.push_back(n-sub);
	    for(int i=1;i<=n;i++) dp2[i] = 0;
	    dp2[0] = 1;
	    for(int each : others){
	        for(int i=n-each;i>=0;i--){
	            if(dp2[i]==1) dp2[i+each]=1,dp[i+each]=1;
	        }
	    }
	}
}

// Given a connect Directed Graph,
// find the minimum number of edge required
// to make every vertex reachable from each other,
// Important
// the condition given that you can only add edge u to v if there is an edge from v to u already exist.


class Solution{
public:
    vector<vector<int>> A;
  	int SolveIB(vector<vector<int> > &A){};  
};
int SolveIB(vector<vector<int> > &A) {
        int n = A.size();
        int m = A[0].size();
        if(n==0 || m==0)
        {
            return 0;
        }
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            int arr[n] = {0};
            for(int j = i; j < m; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    arr[k] = arr[k] + A[k][j];
                }
                ans = ans + zeroes(arr,n);
            }
        }
        return ans;
    }

class SolveMe{
public:
	vector<vector<int> > dp;
	int finding(string& s, string& p, int n, int m)
	{
	// return 1 if n and m are negative
		if (n < 0 && m < 0)
		return 1;

	// return 0 if m is negative
	if (m < 0)
		return 0;

	// return n if n is negative
	if (n < 0)
	{
		// while m is positve
		while (m >= 0)
		{
			if (p[m] != '*')
				return 0;
			m--;
		}
		return 1;
	}
	// if dp state is not visited
	if (dp[n][m] == -1)
	{
		if (p[m] == '*')
		{
			return dp[n][m] = finding(s, p, n - 1, m)|| finding(s, p, n, m - 1);
		}
		else
		{
			if (p[m] != s[n] && p[m] != '?')
				return dp[n][m] = 0;
			else
				return dp[n][m] = finding(s, p, n - 1, m - 1);
		}
	}

	// return dp[n][m] if dp state is previsited
	return dp[n][m];
	}


	bool isMatch(string s, string p)
	{
		dp.clear();
	// resize the dp array
	dp.resize(s.size() + 1, vector<int>(p.size() + 1, -1));
	return dp[s.size()][p.size()] = finding(s, p, s.size() - 1, p.size() - 1);
	}
};