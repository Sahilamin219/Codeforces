#include "bits/stdc++.h"
#define int long long
using namespace std;
string dfs(int v[], int s, int e, int last){
  if(s>e)return "";
  if( v[s] <= last and v[e]<=last)return "";
  if( v[s] > v[e]){
      if( v[e] > last){
        return "R" + dfs(v, s, e-1, v[e]);
      }
      return "L" + dfs(v, s+1, e, v[s]);
  }
  if( v[s] < v[e]){
      if( v[s] > last){
        return "L" + dfs(v, s+1, e, v[s]);
      }
      return "R" + dfs(v, s, e-1, v[e]);
  }
  string ans1="", ans2="";
  if(v[s]>last){
    ans1 += "L";
    ans1 += dfs(v, s+1, e, v[s]);
  }
  if(v[e]>last){
    ans2 += "R";
    ans2 += dfs(v, s, e-1, v[e]);
  }
  if(ans1.size() > ans2.size())return ans1;
  return ans2;
}
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string s;
    int v[n];
    for(int i=0;i<n;i++)cin>>v[i];
    s=dfs(v, 0, n-1, -1);
    cout<<s.length()<<"\n";
    cout<<s;
}