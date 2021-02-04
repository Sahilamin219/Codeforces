#include "bits/stdc++.h"
#include <string_view>
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
void solve_me()
{
  int n,m,r;cin>>n>>m>>r;
  vi buy(n),  sell(m);
  for(auto &i:buy)cin>>i;
  for(auto &i:sell)cin>>i;
  int x=*min_element(all(buy));
  int y=*max_element(all(sell));
  if(y<=x)
  {
    cout<<r;return;
  } 
  int no = (r/x);
  cout<<( y*no + (r%x));
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int TC=1;//cin>>TC;
  while(TC--)solve_me();
}