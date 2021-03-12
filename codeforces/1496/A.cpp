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

void solve_me(){
  int n,k;cin>>n>>k;
  string s;cin>>s;
  if(k==0){
    cout<<"YES\n";return;
  }
  else if(n == 2*k){
    cout<<"NO\n";return;
  }
  int flag=1, j=n-1, i=0, l=n;
  while(k){
    if(s[i] == s[j]){
        i++;j--;k--;continue;
    }
    flag=0;break;
  }
  cout<< (flag ? "YES\n" : "NO\n");
  return;
}

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
	#endif
  // cout << fixed << setprecision(18);
  int TC=1;cin>>TC;
  while(TC--)solve_me();
}