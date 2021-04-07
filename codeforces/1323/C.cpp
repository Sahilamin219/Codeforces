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


void solve(){
  int n;cin>>n;
  string s;cin>>s;
  stack<int> st;
  int i=0, ans=0;
  while(i<s.length()){
    if(s[i]=='('){
      st.push(i);
    }
    else{
      if(st.empty()){
        int cnt=-1, l=1;i++;
        while(i<s.size() and cnt<0){
          if(s[i]=='(')cnt++;
          else cnt--;
          l++;i++;
        }
        if(cnt<0){
          cout<<"-1";return;
        }
        ans+=l;continue;
      }
      else st.pop();
    }
    i+=1;
  }
  if(!st.empty()){cout<<"-1";return;}
  cout<<ans;
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
  int TC=1;//cin>>TC;
  while(TC--)solve();
}
// https://codeforces.com/contest/1353/problem/E
// https://codeforces.com/contest/977/problem/E
// https://codeforces.com/contest/977/problem/D
// https://www.cnblogs.com/grandyang/p/4606334.html