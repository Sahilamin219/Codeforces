#include <bits/stdc++.h>
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
#define Re(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define zrobits(x)	__builtin_ctzll(x)
#define bitcount	__builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
using namespace std;
typedef long long int ll;
#define resultv(v) accumulate(all(v),ll(0))
#define removeDuplicates(a) a.resize(unique(all(a))-a.begin())
#define productv(v) accumulate(all(v), ll(1), multiplies< ll >())
#define difference(v) accumulate(all(v), ll(0), std::minus<ll>())
#define vi vector<ll> 
#define pii pair<ll, ll> 
#define vvi vector<vi>
#define vpii vector<pii>
#define INF 0x3f3f3f3f
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
class Solution {
public:
    int sum=0, flag=0;
    int dp[201][100000];
    bool rec(vector<int> v, int i, int s)
    {
        if(flag)return true;
        if(s==sum/2){flag=1;return true;}
        if(i==v.size())return false;
        if(dp[i][s] != -1)return dp[i][s];
        dp[i][s] = rec(v, i+1, s)+rec(v, i+1, s+v[i]);
        return dp[i][s];
    }
    bool canPartition(vector<int>& v) {
        sum=accumulate(v.begin(), v.end(), 0);
        if(sum%2)return false;
        for(int i=0;i<201;i++){
        	for(int j=0;j<100000;j++)dp[i][j]=-1;
        }
        return rec(v, 0, 0);
    }
};
bool isleap(ll x)
{
	if((x%400==0) or (x%4==0 and x%100))return true;
	return false;
}
void solve()
{
	// vector<int> v={1,5,11,5};
	// Solution C;
	// int ans=C.canPartition(v);
	// cout<<ans;
	ll n, r, same;cin>>n;same=n%7,r=same;
	bool state = isleap(n);
	do{
		r++;n++;
		if(isleap(n))r++;
		r=r%7;
	}while(r!=same or state!=isleap(n));
	cout<<n;
}
int main(){
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
//     auto min_ = *min_element(arr.begin(), arr.end());
//     auto ans = numeric_limits<int>:: max();
//     for(auto i=0;i<5;i++){
//         auto operations = [min_,i](auto init, auto j){
//             auto t = j-(min_-i);
//             return init + t/5 + t%5/2 + t%5%2;
//         };
//         ans=min(ans,accumulate(arr.begin(), arr.end(), 0, operations));
//     }
//     return ans;
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