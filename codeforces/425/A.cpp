#include "bits/stdc++.h"
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
#define INF 0x3f3f3f3f
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
#define MAX_SIZE 12
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
inline int32_t add(int a, int b) { return a + b >= mod ? a + b - mod : a + b; }
inline int32_t mul(int a, int b) { return (a * 1ll * b % mod); }
inline void inc(int& a, int b) { a = add(a, b); }
int mpow(int n, int p){
	int res=1;
	while(p){
		if(p&1)(res*=n)%=mod;
		(n*=n)%=mod,p/=2;
	}
	return res;
}
#define deb(v) for(auto x: v){cerr<<x<<" ";}cerr<<"\n";
#define debp(v) for(auto x: v){cout<<x.first<<","<<x.second<<" ";}cout<<"\n";
const int MAX=10000007;
int prime[MAX]; 
int prime_count[MAX]; 
vector<int> store;
void Sieve() { 
    memset(prime, 0, sizeof(prime)); 
    prime[0] = prime[1] = 1; 
    for (int i = 2; i * i <= 1000000000; i++) { 
        if (prime[i] == 0) { 
            store.push_back(i);
            for (int j = i ; j <= 1000000000; j += i) { 
                if (prime[j] == 0) prime[j] = i; 
            } 
        } 
    } 
} 
long long NumberOfDivisorsOfProduct(vector<int> arr,int n) { 
    memset(prime_count, 0, sizeof(prime_count)); 
    for (int i = 0; i < n; i++) { 
        int temp = arr[i]; 
        while (temp != 1) { // Increase the count of prime encountered 
            prime_count[prime[temp]]++; 
            temp = temp / prime[temp]; 
        } 
    } 
    long long ans = 1; 
    for (int i = 2; i < MAX; i++) { // Multiplying the count of primes encountered 
        ans = ((ans%mod)*(prime_count[i] + 1))%mod; 
    } 
    return ans%mod; 
} 
struct Player{
	int score;
	string name;
};
class Checker{
public:
    static int comparator(Player p1, Player p2)  {
        if(p1.score < p2.score) return -1;
        if(p1.score==p2.score) {
            if(p1.name < p2.name)return 1;
            if(p1.name == p2.name)return 0;
            return -1;
        }
        return 1;
    }
};
auto Cmp = [&](pair<int,int>& a, pair<int,int>&b){
  return a.second < b.second;
 };
 priority_queue<pair<int,int>,vector<pair<int,int> >, decltype(Cmp) > q(Cmp);
int NumOfFactors(int a){
    int res=0;
    for(int i=2;i*i<=a;i++){
        while(a%i==0){
            res++;
            a/=i;
        }
    }
    if(a>1)res++;
    return res;
}
template <typename T> static constexpr T inf = numeric_limits<T>::max() / 2;
void Solve_cf(){
    int n, k;cin>>n>>k;
    vector<int> v(n), u;
    for(auto &i:v)cin>>i;
        int ans=-inf<int>;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            priority_queue<int> Outside;
            int CurSum=0;
            priority_queue<int, vector<int>, greater<int>> pq;
            for(int x=0;x<n;x++)
            {
                if(x>=i and x<=j)
                {
                    CurSum+=v[x];
                    pq.push(v[x]);
                }
                else Outside.push(v[x]);
            }
            ans=max(ans, CurSum);
            for(int x=0;x<k;x++)
            {
                if(pq.empty() or Outside.empty())break;
                CurSum-=pq.top();
                pq.pop();
                CurSum+=Outside.top();
                Outside.pop();
                ans=max(ans, CurSum);
            }
            // cout<<ans<<" ";
        }
    }
    cout<<ans;
    return ;
}
int dp[1001][1001];
bool CheckPossibility(int i, int j, int k, string s1, string s2, string s3){
    if(k==s1.size() + s2.size()-1){
        dp[i][j]=1;
        return true;
    }
    if(dp[i][j]!=-1)return dp[i][j]==1;
    bool ok=false;
    if(i<s1.size() and s1[i] == s3[k])ok = ok or CheckPossibility(i+1, j, k+1, s1, s2, s3);
    if(j<s2.size() and s2[j] == s3[k])ok = ok or CheckPossibility(i, j+1, k+1, s1, s2, s3);
    dp[i][j]=(ok==true);
    return ok;
}
bool Solving(string s1, string s2, string s3) {
    if( s1.length() < s2.length() )swap(s1, s2);
    if(s2=="")return s1==s3;
    if(s3.size() != s1.size() + s2.size())return  false;
    memset(dp, -1, sizeof(dp));
    return CheckPossibility(0, 0, 0, s1, s2, s3);
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
    // sieve();
	int TestCase=1;//cin>>TestCase;
	while(TestCase--)Solve_cf();
	return 0;
}
