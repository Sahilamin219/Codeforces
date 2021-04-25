#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
int mod=10e9+7;
#define deb(v) for(auto x: v){cerr<<x<<" ";}cerr<<"\n";
#define deb2(v) for(auto x: v){cout<<x.first<<","<<x.second<<" ";}cout<<"\n";
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
struct  Data {
  int min;
  int max;
  int sum;
  Data(int min=0, int max=0, int sum=0) : min(min), max(max), sum(sum) {};
};
bool bysec(const pair<int,int> &a, const pair<int,int> &b){
    if(a.second==b.second){return (a.first > b.first);}
    return a.second < b.second;
}
// lowest-common-ancestor-of-a-binary-tree-iv/
template <typename T> vi iota(vector<T> &a, bool greater = false) {
    vi res(a.size());
    iota(all(res), 0);
    sort(all(res), [&](int i, int j) {
        if(greater) return a[i] > a[j];
        return a[i] < a[j];
    });
    return res;
}
// walls-and-gates/
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())
vector<pair<int, int> > factor(int x) {
    vector<pair<int, int> > ans;
    for(int i = 2; i * i <= x; i++)
        if(x % i == 0) {
            ans.push_back({i, 1});
            while((x /= i) % i == 0) ans.back().second++;
        }
    if(x != 1) ans.push_back({x, 1});
    return ans;
}
template <class T> vector<T> divisor(T x) {
    vector<T> ans;
    for(T i = 1; i * i <= x; i++)
        if(x % i == 0) {
            ans.pb(i);
            if(i * i != x) ans.pb(x / i);
        }
    return ans;
}
template <typename T> void zip(vector<T> &x) {
    vector<T> y = x;
    sort(all(y));
    for(int i = 0; i < x.size(); ++i) { x[i] = lb(y, x[i]); }
}
 
struct UnionFind {
    vector<int> data;
    int num;
 
    UnionFind(int n) : num(n) { data.assign(n, -1); }
 
    bool unite(int x, int y) {
        x = find(x), y = find(y);
        if(x == y) return false;
        num--;
        if(data[x] > data[y]) swap(x, y);
        data[x] += data[y];
        data[y] = x;
        return true;
    }
 
    bool same(int x, int y) { return find(x) == find(y); }
 
    int find(int x) {
        if(data[x] < 0) return x;
        return (data[x] = find(data[x]));
    }
    int size(int x) { return -data[find(x)]; }
    const int operator[](const int k) { return find(k); }
    vector<vi> belong() {
        vector<vi> res(data.size());
        for(int i=0;i<data.size();i++) res[find(i)].emplace_back(i);
        return res;
    }
    void reset() {
        num = data.size();
        data.assign(num, -1);
    }
};
class A
{
public:
  static int x;
  A(){
    x++;
  }
  ~A(){
    // x--;
  }
  void* operator new(size_t sz){
    x++;
  }
};
int A::x=0;
void solve(){
  int n;cin>>n;
  vi v(n);
  for(auto &i:v)cin>>i;
    vector<vi> res(n, vector<int>(n, -1));
  for(int i=0;i<n;i++){
    int vl=v[i];
      int x=i, y=i;
    while( vl ){
      res[x][y]=v[i];
      if( y>0 and res[x][y-1] == -1){
        y--;
      }
      else x++;
      vl--;
    }
    x++, y++;
  }
  for(auto x: res){
    for(auto y:x){
      if(y!=-1)cout<<y<<" ";
    }cout<<"\n";
  }
  return ;
  A a, b;//local -> stack
  A c, d, e;
  // dynamic -> heap
  A* ptr_ = (A*)malloc(sizeof(A));//allocates memory doesn't call const.
  free(ptr_);//does n't call  destructor
  A* ptr = new A;//constructor as well
  // delete(ptr);
  // cout<<ptr->x<<" ";
  cout<<A::x<<"\n";
  return ;
  auto Life=nullptr;
  cout<<(&Life);
}
int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
  #endif
  int TC=1;//cin>>TC;
  while(TC--)solve();
  vi vis(20001);
  int maxDepth, depth, farthestNode;
  vector<vi> adj;
  function <void(int, int, int)> dfs = [&](int a, int par, int depth) {
      vis[a] = true;
      if(depth > maxDepth){
          maxDepth = depth;
          farthestNode = a;
      }
      for(auto x: adj[a]){
          if(!vis[x])
              dfs(x, a, 1 + depth);
      }
  };
}
// https://codeforces.com/contest/1353/problem/E
// https://codeforces.com/contest/977/problem/E
// https://codeforces.com/contest/977/problem/D
// https://codeforces.com/contest/1175/problem/C
// https://www.cnblogs.com/grandyang/p/4606334.html