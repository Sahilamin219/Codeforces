#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
int mod=10e9+7;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
#define deb2(v) for(auto x: v){cout<<x.frist<<","<<x.second<<" ";}cout<<"\n";
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
// Ability and desire to thrive in a proactive, customer focused environment
// vi gr[1001];
// vi wgt[1001];
// vi visit[1001];
// void dfs_(int node, int parent){
//   visit[node]=1;
//   for(auto x: gr[node] ){
//     if(x!=parent and !visit[node] and wgt[x] > wgt[node]){
//       dfs_(x, node);
//     }
//   }
//   top.push_back(node);
// }
// meri google mai laga do ...
// const int NMAX = (int)1e8;
// bitset<NMAX> bits;
void solve(){
  int n, q;cin>>n>>q;
  unordered_map<int, int> m;
  vector<pair<int, int>> vp;
  //orderd sequnce
  for(int i=0, vl;i<n;i++){
    cin>>vl;
    if(m.find(vl)==m.end()){
      m[vl]=i;
      vp.push_back({vl, i});
    }
  }
  while(q--){
    int k;cin>>k;
    vector<pair<int, int>>::iterator it=vp.begin(), Itr;
    bool subOradd=0;
    for(;it!=vp.end();it++){
      if(it->first==k){
        Itr=it;
        subOradd=1;continue;
      }
      if(subOradd)it->second+=0;
      else it->second+=1;
    }

    cout<<Itr->second+1<<" ";
    vp.erase(Itr);
    vp.insert( vp.begin() , { k, 0 } );
  }
  return ;
  auto Life=nullptr;
  cout<<(&Life);
}
int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
  #endif
  // cout << fixed << setprecision(18);
  // bits.set();
  // bits[0] = bits[1] = 0;
  // for (int i = 2; i * i <= NMAX; i++) {
  //   if (bits[i]) {
  //     for (int j = i * i; j <= NMAX; j += i) bits[j] = 0;
  //   }
  // }
  int TC=1;//cin>>TC;
  while(TC--)solve();
}
// https://codeforces.com/contest/1353/problem/E
// https://codeforces.com/contest/977/problem/E
// https://codeforces.com/contest/977/problem/D
// https://codeforces.com/contest/1175/problem/C
// https://www.cnblogs.com/grandyang/p/4606334.html
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