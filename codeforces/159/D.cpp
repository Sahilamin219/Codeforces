#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define pb push_back
#define mkp make_pair
#define int long long

#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

using namespace std;
using namespace __gnu_pbds;

#define INF 0x3f3f3f3f
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
#define MAX_SIZE 12

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
  

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
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
class Solution{
public:
    vector<vector<int>> A;
  	int SolveIB(vector<vector<int> > &A){};  
};
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
int minSwaps(vector<int>&nums)
{
    map<int,int>m;
    for(int i=0;i<nums.size();i++)
    m[nums[i]] = i;
    int c = 0,i=0;
    auto it = m.begin();
    for(;it!=m.end();++it){
        if(it->first!=nums[i]){
            m[nums[i]]=it->second;
            swap(nums[i],nums[it->second]);
            c+=1;
        }
        i+=1;
    }
    return c;
}
const int MAX=2005;
bool visit[MAX][MAX], DP[MAX][MAX];
vector<int> prefix(MAX, 0);
string s;
int check(int i,  int j){
	if(i>=j){
		return 1;
	}
	if(visit[i][j])return DP[i][j];
	bool &ans = DP[i][j];
	if(s[i] == s[j]){
		ans |= check(i+1, j-1);
	}
	else ans=0;
	visit[i][j]=1;
	return ans;
}
void solve(){
	cin>>s;
	int ans=0;
	int n=s.size();
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(check(i, j)){
				prefix[j]+=1;
			}
		}
	}
	for(int i=1;i<n;i++){
		prefix[i] += prefix[i-1];
	}
	for(int i=1;i<n;i++){
		for(int j=i;j<n;j++){
			if(check(i, j)){
				ans += prefix[i-1];
			}
		}
	}
	cout<<ans<<"\n";
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	solve();
	return 0;
}