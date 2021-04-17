#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
int mod=10e9+7;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
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
void solve(){
  string s;cin>>s;
  int n=s.size();
  // vi lastOpen(n), currOpen(n);
  stack<int> st;
  st.push(-1);
  unordered_map<int, int> count;
  int result=0;
  for(int i=0;i<n;i++){
    if(s[i]=='('){
      st.push(i);
    }
    else{
      if(!st.empty()){
        st.pop();
      }
      if( !st.empty() ){
        result = max( result, i - st.top() );
        count[i - st.top()]++;
      }
      else st.push(i);
    }
  }
  cout<<result<<" "<<max( count[result], 1ll);
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
}