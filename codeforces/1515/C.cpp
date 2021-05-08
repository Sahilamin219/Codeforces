#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)

using namespace std;
const double DINF = numeric_limits<double>::infinity();
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
#define mod 1000000009
#define INF 0x3f3f3f3f;
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
const int maxn = (2e3 + 5);
#define MAX 200001
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
typedef vector<int> vi;
int max3(int a, int b, int c){return max(a, max(b,c));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    if(a.second==b.second){return (a.first > b.first);}
    return a.second>b.second;
}
bool bin_search(int x[], int n, int k) {
	int p = 0;
	for (int a = n; a >= 1; a /= 2) {
		while (p+a < n && x[p+a] <= k) p += a;
	}
	return x[p] == k;
}

int takemod(int a){return ((a%mod)+mod)%mod;}
int fast_exp(int base, int expo) {
  int res=1;
  while(expo>0) {
    if(expo&1) res=(res*base)%mod;
    base=(base*base)%mod;
    expo>>=1;
  }
  return res;
}
int modinv(int a){return takemod(fast_exp(takemod(a), mod-2));}
auto sort2=[](pair<int,char>& a, pair<int,char>&b){return a.first<b.first;};
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
void save(){
  priority_queue<pair<int,char>,vector<pair<int,char>>, decltype(sort2) > p(sort2);
}

void GCD(){
  int n;cin>>n;
  map<int, int> m;
  for(int i=0, vl;i<n*n;i++){
    cin>>vl;
    m[-vl]++;
  }
  int pos=n-1;
  vi res(n);
  for(auto it=m.begin();it!=m.end();it++){
    int x=-it->first;
    while(it->second){
      --it->second;
      res[pos]=x;
      for(int i=pos+1;i<n;i++){
        m[-(__gcd(res[i], x))]-=2;
      }
      pos--;
    }
  }
  for(auto x: res)cout<<x<<" ";
}
template<class InputIt>
constexpr // since C++17
InputIt next(InputIt it,
             typename std::iterator_traits<InputIt>::difference_type n = 1)
{
    std::advance(it, n);
    return it;
}
void solve1(){
  string a, b; cin >> a >> b;
  int na = a.length(), nb = b.length();
  int ans = na + nb;
  for(int len = na; len >= 1; --len){
      for(int i = 0; i + len - 1 < na; ++i){
          for(int k = 0; k + len - 1 < nb; ++k){
              if(b.substr(k, len) == a.substr(i, len)){
                  ans = min(ans, na + nb - 2 * len);
                  break;
              }
          }
      }
  }
  cout << ans << '\n';
}

void solve(){
  cout<<"YES\n";
  int n, m, x;cin>>n>>m>>x;
  set<pair<int, int>> ms;
  for(int i=0;i<m;i++)ms.insert({0, i+1});
  for(int i=0, vl;i<n;i++){
    cin>>vl;
    auto p=*ms.begin();
    cout<<p.second<<" ";
    ms.erase(p);
    ms.insert( {p.first + vl ,  p.second });
  }cout<<"\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
  int t=1;cin>>t;
  while(t--){
    solve();
  }
	return 0;
}
// https://codeforces.com/contest/977/problem/D
// https://codeforces.com/contest/977/problem/E
// https://codeforces.com/contest/604/problem/C
// https://codeforces.com/contest/490/problem/B
// https://codeforces.com/gym/102697/problem/175

void Evang()
{
  string s;
  cin >> s;
  bool a = false;
  again:
  while (s.size()) {
    for (unsigned long i = 0; i < s.size() - 1; i++)
      if (s[i] == s[i + 1]) {
        s.erase(s.begin() + i + 1);
        s.erase(s.begin() + i);
        a = !a;
        goto again;
      }
    break;
  }
  // s.erase(i,2);
  if (a)
    cout << "Yes\n";
  else
    cout << "No";
}

// 763. Partition Labels
// greedly maximaxe j at every index and when i==j push it 
// https://learning.tcsionhub.in/hub/national-qualifier-test/
// https://github.com/Ebazhanov/linkedin-skill-assessments-quizzes

// When you want to succeed as bad as you want to breathe, only then you’ll Be Successful!
// No Matter,How Fast You Are Driving If You Are Driving in a Wrong Direction You Will Never Reach Your Destination
// When you face failures, Don’t change your goal, Change your strategy!