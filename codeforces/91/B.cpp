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
#define INF 0x3f3f3f3f;
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
int max3(int a, int b, int c){return max(a, max(b,c));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return (hash1 ^ hash2);
    }
};
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.second==b.second){return (a.first > b.first);}
    return a.second>b.second;
}
bool cmp(pair<int, int>& a, pair<int, int>& b) 
{ 
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
class Solution {
public:
    struct compare{
      bool operator()(vector<int>&a, vector<int>&b){
        if(a[0]==b[0])
          return a[1]>b[1];
        return a[0]<b[0];
      }
    };
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        priority_queue<vector<int>, vector<vector<int>>, compare> pq;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
           pq.push({people[i][0], people[i][1]});
        }
        while(!pq.empty()){
            auto curr=pq.top(); 
            cerr<<curr[0]<<","<<curr[1]<<"\n";
            ans.insert(ans.begin()+curr[1], curr);
            pq.pop();
        }
        return ans;
    }
};

auto myComp = [&](pair<int,int> e1, pair<int,int> e2) {
  if(e1.second < e2.second)
    return e1.first > e2.first;
};

int n;
void solve_me()
{
	Solution sol;
  vector<vector<int>> V = {{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
  vector<vector<int>> Ans=sol.reconstructQueue(V);
  for(auto x: Ans){for(auto y:x){cerr<<y<<",";}cerr<<" ";}
  cin>>n;
  // vector<pair<int, int>> v(n);
  vi v(n);
  for(int i=0, vl;i<n;i++)
  {
    // cin>>vl;
    // v[i] = { i , vl};
    cin>>v[i];
  }
  // sort(all(v));
  vi ans(n, -1);
  vi pre(n);
  pre[n-1]=v[n-1];
  for(int i=n-2;i>=0;i--)
  {
    pre[i] = min(pre[i+1], v[i]);
  }
  for(int i=0;i<n;i++)
  {
    int in=lower_bound(pre.begin() + i + 1, pre.end(), v[i]) - ( pre.begin() + i ) - 1;
    in--;
    ans[i]=max(in, -1ll);
  }
  // for(int i=0;i<n;i++)
  // {
  //   int j = lower_bound(all(v), v[i], myComp) - v.begin();
  //   ans[v[i].first]=j;
  // }
  for(auto x:ans){cout<<x<<" ";}
  return;
}

int32_t main( )
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	int tt = clock();
	#endif
	// cout << fixed << setprecision(18);
	int Testcase=1;//assert(cin>>Testcase);
	while(Testcase--)solve_me();
  exit(0);
	#ifndef ONLINE_JUDGE
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
	#endif
	return 0;
	// s.erase(i,2);
}
// https://codeforces.com/contest/977/problem/D
// https://codeforces.com/contest/977/problem/E
// ---https://codeforces.com/contest/604/problem/C
// ---https://codeforces.com/contest/490/problem/B
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
  if (a)
    cout << "Yes\n";
  else
    cout << "No";
}
// brute forces -> peffix sum, suffix sum, difference array
// greedy ... cycle ..use modulo
// stack ... first, last, size left
// have string idea of binary search 
// dp always reaches n*n ..so make states more precise 
// to lead towards k*n ... 
// ***pointers***

// 763. Partition Labels
// greedly maximaxe j at every index and when i==j push it 
// https://learning.tcsionhub.in/hub/national-qualifier-test/
// https://github.com/Ebazhanov/linkedin-skill-assessments-quizzes

// When you want to succeed as bad as you want to breathe, only then you’ll Be Successful!
// No Matter,How Fast You Are Driving If You Are Driving in a Wrong Direction You Will Never Reach Your Destination
// When failures hit you, you hit the failures back with Bounce Back!
// When you face failures, Don’t change your goal, Change your strategy!