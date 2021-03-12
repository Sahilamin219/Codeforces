#include "bits/stdc++.h"
#include <string_view>
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
const int cons=501;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {return (a.second < b.second);}
static bool mysort(pair<int, int>& a, pair<int, int>& b)
{
  return a.first == b.first ? a.second < b.second : a.first > b.first;
}
template<typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
struct cmp {
  bool operator() (pair<int, int> a, pair<int, int> b) {
     return a.first+a.second > b.first+b.second;
  }
};

#define mod 1000000009


static bool UseMe(pair<int, int> &a, pair<int, int> &b){
  return a.second > b.second;
}

struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const{
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return (hash1 ^ hash2);
    }
};

void solve_me(){
  int n;cin>>n;
  vector<int> miners, mine;
  for(int i=0;i<2*n;i++){
    int a, b;cin>>a>>b;
    if(a==0){
      a=abs(a);
      b=abs(b);
      // miners.push_back({a,b});
      miners.push_back(b);
    }
    else{
      a=abs(a);
      b=abs(b);
      // mine.push_back({a,b});
      mine.push_back(a);
    }
  }
  sort(all(miners));
  sort(all(mine));
  long double d=0;
  for(int i=0;i<n;i++){
    d += (double)sqrt( 1.0*mine[i]*mine[i] + 1.0*miners[i]*miners[i]  );
    // cout<<d<<"\n";
    // cout<<mine[i]<<" "<<miners[i]<<"\n";
  }
  cout<<d<<"\n";
  return;
}

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
	#endif
  cout << fixed << setprecision(18);
  int TC=1;cin>>TC;
  while(TC--)solve_me();
}