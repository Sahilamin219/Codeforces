#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define popf pop_front
#define pf push_front
#define popb pop_back
#define mp make_pair
#define pb push_back
#define remove erase
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
const double DINF = numeric_limits<double>::infinity();
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
#define mod 1000000009
// #define INF 0x3f3f3f3f;
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
int max3(int a, int b, int c){return max(a, max(b,c));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const{
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return (hash1 ^ hash2);
    }
};
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    if(a.second==b.second){return (a.first > b.first);}
    return a.second>b.second;
}
bool cmp(pair<int, int>& a, pair<int, int>& b) { 
    return a.second < b.second; 
} 
template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second < b.second;
    }
};
const int maxn = (2e3 + 5);
bool bin_search(int x[], int n, int k) {
	int p = 0;
	for (int a = n; a >= 1; a /= 2) {
		while (p+a < n && x[p+a] <= k) p += a;
	}
	return x[p] == k;
}
auto myComp = [&](pair<int,int> e1, pair<int,int> e2) {
  if(e1.second < e2.second)
    return e1.first > e2.first;
};

void Partition(vi& v, int p){
  int n=v.size(), j=n-1;
  for(int i=0;i<n and i<j;i++){
    if(v[i] >= p ){
      while( j>= 0){
        if( p > v[j]){
          swap(v[i], v[j]);
          break;
        }
        j--;
      }
    }
  }
}

int myPartition(vi &v, int i, int j, int p)
{
  int pivot = v[p];
  while (i<=j)
  {
    while (v[i]<pivot) 
      {i++;}
    while (v[j]>pivot) 
      {j--;}
    if (i<=j)
    {
      swap(v[i], v[j]);
      i++;
      j--;
    }
  }
  return j;
}

void quickSort(vi &v, int low, int high){
  if (high<=low) return;
  int mid = (low + high)/2;
  int r = myPartition(v, low, high, mid);
  int i = r+2, j = r;
  if (low<j) quickSort(v, low, j);
  if (i<high) quickSort(v, i, high);
}
void solve_me()
{
  int n;cin>>n;
  vi freq(n+2, 0);
  map<int, int> m;
  for(int i=0,vl;i<n;i++ ){
    cin>>vl;
    m[vl]++;
  }
  for(auto It:m){
    freq[1]++;
    freq[It.second + 1]--;
  }
  for(int i=1;i<=n;i++){
    freq[i] += freq[i-1];
  }
  int ans=n;
  for(int i=1;i<=n;i++){
    ans = min(ans, n - freq[i]*i);  
  }
  cout<<ans<<"\n";
  return;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int TC=1;cin>>TC;
    while(TC--)solve_me();
	return 0;
}