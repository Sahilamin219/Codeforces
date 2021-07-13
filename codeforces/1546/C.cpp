#include "bits/stdc++.h"
#define int long long
#define mod 1000000007
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount	__builtin_popcountll(x)
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define forn(i, n) for (int i = 0; i < (n); i++)
#define flip_bits(number) static_cast<unsigned>(~number) 
using namespace std;
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
const int MAX=10000007;
int prime[MAX]; 
int prime_count[MAX]; 
vector<int> store;
 class POW {
    public :
    double pow(double x, int n) {
        if(n == 0)
            return 1;
        if(n<0){
            n = -n;
            x = 1/x;
        }
        return (n%2 == 0) ? pow(x*x, n/2) : x*pow(x*x, n/2);
    }
};
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
const int N=1e5+5;
vector<int> odd, even;
void Solve_cf(){
    int n;cin>>n;
    vector<int> v(n);
    odd=vector<int> (N);
    even=vector<int> (N);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> u(v);
    sort(u.begin(), u.end());
    for(int i=0;i<n;i++){
        if(i&1){
            odd[u[i]]++;
        }
        else{
            even[u[i]]++;
        }
    }
    for(int i=0;i<n;i++){
        if(i&1){
            if( odd[v[i]] <= 0){
                cout<<"NO\n";return;
            }
            else odd[v[i]]--;
        }
        else{
            if( even[v[i]] <= 0){
                cout<<"NO\n";return;
            }
            else even[v[i]]--;
        }
    }
    cout<<"YES\n";return;
}
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int TestCase=1;cin>>TestCase;
	while(TestCase--)Solve_cf();
	return 0;
}
class Solution1 {
public:
    struct T {
        int time, x, y;
        T(int a, int b, int c) : time (a), x (b), y (c){}
    };
    struct cmp{
        bool operator() (const T &A, const T &B) {return A.time > B.time;}
    };
    int swimInWater(vector<vector<int>>& grid) {
        int N=grid.size(), res=0;
        priority_queue<T, vector<T>, cmp> pq;
        pq.push(T(grid[0][0], 0, 0));
        vector<vector<int>> seen(N, vector<int>(N, 0));
        seen[0][0] = 1;
        static int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, { -1, 0}};
        while (true) {
            auto p = pq.top ();
            pq.pop ();
            res = max(res, p.time);
            if (p.x == N - 1 && p.y == N - 1) return res;
            for (auto& d : dir) {
                int i = p.x + d[0], j = p.y + d[1];
                if (i >= 0 && i < N && j >= 0 && j < N && !seen[i][j]) {
                    seen[i][j] = 1;
                    pq.push (T(grid[i][j], i, j));
                }
            }
        }
    }
};
class Solution2 {
public:
    int divide(int dividend__, int divisor__) {
        int dividend = dividend__, divisor = divisor__;
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        cout<<sign<<" ";
        dividend = abs(dividend);
        divisor = abs(divisor);
        long long quotient = 0, temp = 0;
        for (int i = 31; i >= 0; --i) {
            if (temp + (divisor << i) <= dividend) {
              temp += divisor << i;
              quotient |= 1LL << i;
            }
          }
        return sign*quotient;
    }
};