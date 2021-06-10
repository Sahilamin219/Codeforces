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
#define deb(v) for(auto x: v){cerr<<x<<" ";}cerr<<"\n";
#define debp(v) for(auto x: v){cout<<x.first<<","<<x.second<<" ";}cout<<"\n";
// int dp[5001][2];
// int n;
// int v[5001];

void Solve_cf(){
	int n;cin>>n;
	vector<int> v(n), u(n);
	for(int i=0;i<n;i++)cin>>v[i];
	for(int i=0;i<n;i++)cin>>u[i];
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(u[i] == v[j])j++;
	}
	cout<<n-j;
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int TestCase=1;//cin>>TestCase;
	while(TestCase--)Solve_cf();
	return 0;
}

const int MAX=10000007;
int prime[MAX]; 
int prime_count[MAX]; 
void sieve() 
{ 
    memset(prime, 0, sizeof(prime)); 
    prime[0] = prime[1] = 1; 
    for (int i = 2; i * i < MAX; i++) { 
        if (prime[i] == 0) { 
            for (int j = i * 2; j < MAX; j += i) { 
                if (prime[j] == 0) 
                    prime[j] = i; 
            } 
        } 
    } 
    for (int i = 2; i < MAX; i++) { 
        // If the number is prime then it's  
        // smallest prime factor is the number itself 
        if (prime[i] == 0) 
            prime[i] = i; 
    } 
} 
long long numberOfDivisorsOfProduct(vector<int> arr,int n) 
{ 
    memset(prime_count, 0, sizeof(prime_count)); 
    for (int i = 0; i < n; i++) { 
        int temp = arr[i]; 
        while (temp != 1) { 
            // Increase the count of prime encountered 
            prime_count[prime[temp]]++; 
            temp = temp / prime[temp]; 
        } 
    } 
    long long ans = 1; 
    // Multiplying the count of primes encountered 
    for (int i = 2; i < MAX; i++) { 
        ans = ((ans%mod)*(prime_count[i] + 1))%mod; 
    } 
    return ans%mod; 
} 