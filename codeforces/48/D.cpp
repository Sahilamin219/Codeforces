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

void Solve_cf(){
	int n;cin>>n;
	vector<int> v(n);
	map<int, vector<int>> m;
	for(int i=0;i<n;i++){
		cin>>v[i];
		m[v[i]].push_back(i);
	}
	if(n==1 and v[0]!=1){
		cout<<"-1";return;
	}
	auto it=m.begin();
	int prev=it->second.size(), last=it->first;
	it++;
	for(;it!=m.end();it++){
		if( it->second.size() > prev or (it->first - last != 1)){
			cout<<"-1";return;
		}
		prev=it->second.size();
		last=it->first;
	}
	cout<<m[1].size()<<"\n";
	vector<int> pointers(1000001, 1);
	for(int i=0;i<n;i++)
	{
		cout<<pointers[v[i]]<<" ";
		pointers[v[i]]++;
	}
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