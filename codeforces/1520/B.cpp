#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define vec vector
#define pb push_back
#define pp pop_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define un_map unordered_map
#define rep(i,a,n) for (int i = a; i < n; ++i) 
#define rrep(i,a,n) for (int i = a; i >= n; --i) 
#define irep(i,a,n,inc) for (int i = a; i < n; i += inc) 
#define couts(x) cout << x << "\n" 
#define watch(x) cout << #x << " : " << x << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<long long, long long> plii;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef map<long long, long long> mll; 
typedef map<int,int> mii;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
 
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

int const mod = 998244353;
#define int long long 
#define endl "\n"

template<typename T>
void print(vector<vector<T>> v) {
  for (int i = 0; i < (int)v.size(); ++i) {
    cout << i << " : ";
    for (int j = 0; j < (int)v[i].size(); ++j) {
      cout << v[i][j] << " ";
    } 
    cout << endl;
  }
  cout << endl;
}

template<typename T>
void arr(T *a, int n) {
  for (int i = 0; i < n; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
}

vector<int> seive(vector<int> &v) {
  int n = (int)v.size();
  vector<int> primes;
  for (int i = 2; i < n; ++i) {
    if (v[i] == 0) {  
      primes.push_back(i);
      for (int j = i; j < n; j += i) v[j] = i;
    }
  }
  return primes;
}
int power_mod(int a, int b) {
  int ans = 1;
  while (b) {
    if(b & 1) {
      ans = (1LL * ans * a) % mod;
    }
    a = (1LL * a * a) % mod;
    b /= 2;
  }
  return ans;
}

void solve() {
  int n;
  cin >> n;
  int size = 0;
  int d = n;
  while (d) {
    d /= 10;
    size++;
  }
  int ans = 0;
  for (int i = 1; i < size; ++i) {
    ans += 9;
  }
  for (int i = 1; i <= 9; ++i) {
    int val = 0;
    int p = 1;
    for (int j = 0; j < size; ++j) {
      val += p * i;
      p *= 10;
    }
    if (val <= n) {
      ans++;
    }
  }
  cout << ans << endl;
}



int32_t main() {
  IOS;
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
}


