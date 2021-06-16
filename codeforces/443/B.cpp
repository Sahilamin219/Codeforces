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
    x--;
  }
  void* operator new(size_t sz){
    x++;
  }
};
int A::x=0;
void solve(){
    string s;cin>>s;
    int k;cin>>k;
    
    /*
    steps:-
    1.Add ? k times to the end of string to get a new string. Lets call it s.
    2.Set j=length(s) div 2.
    3.Set i=1.
    4.We consider substring copy(s,i,2*j). Let divide the substring into 2 strings: string x=copy(s,i,j) and string y=copy(s,i+j,j).
    5.To "compare" string x and y, we replace every ? in string y with the character in respective position of string x. After the replacement, if x=y then we have a tandem string; if not, increase i by 1 and go back to Step 4.
    6.If i>(length(s)-2*j+1) and we cannot find tandem substring with length 2*j we decrease j by 1 and go back to Step 3.
    */

    s += string(k, '.');
    int n=s.length();
    int ans=0;
    for(int i=0;i<=n-2;i++)
    {
        int loca=0;
        for(int len=1;len<=(n-i+1)/2;len++){
            bool flag=true;
            for(int j=i;j<=i+len-1;j++)
            {
                if(s[j] != s[j+len])
                {
                    if(s[j]!='.' and s[j+len]!='.')
                    {
                        flag=false;break;
                    }
                }
                if(j+len>=n){
                    flag=false;break;
                }
            }
            if(flag==true){
                loca=max(loca, len);
            }
        }
        ans=max(ans, loca);
    }
    cout<<2*ans;

  // A a, b;//local -> stack
  // A c, d, e;
  // // dynamic -> heap
  // A* ptr_ = (A*)malloc(sizeof(A));//allocates memory doesn't call const.
  // free(ptr_);//does n't call  destructor
  // A* ptr = new A;//constructor as well
  // delete(ptr);
  // cout<<ptr->x<<" ";
  // cout<<A::x<<"\n";

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
  return 0;
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


class Solution{
public:
    static bool sec(const vector<int> &A, const vector<int> &B){
        if( A[0] !=  B[0] )return A[0] < B[0];
        if( A[1] == B[1])return A[2] < B[2];
        return A[1] < B[1];
    }
    struct compare{
        bool operator()(vector<int> &a,vector<int> &b){
            if(a[1]==b[1])
                return a[2]>b[2];
            return a[1]>b[1];
        }
    };
    vector<int> getOrder(vector<vector<int>>& tasks){
        for(int i=0;i<tasks.size();i++){
            tasks[i].push_back(i);
        }
        sort(tasks.begin(), tasks.end(), sec);
        vector<int> res;
        priority_queue<vector<int>, vector<vector<int>>, compare> pq;
        int time=tasks[0][0], i=0;
        while(i<tasks.size()){
            if( (int)tasks[i][0] <= time)pq.push(tasks[i]), i++;
            else break;
        }
        while(!pq.empty()){
            vector<int> cur=pq.top();
            pq.pop();
            res.push_back(cur[2]);
            time += cur[1];
            while(i<tasks.size()){
                if( tasks[i][0] <= time)pq.push(tasks[i]), i++;
                else break;
            }
            //If the task has enqueue time greater than current running time.
            if(i!=tasks.size() and pq.empty()){
                time=tasks[i][0];
                pq.push(tasks[i]);
                i++;
            }
        }
        return res;
    }
};
// /rearrange-string-k-distance-apart/