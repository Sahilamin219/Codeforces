#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define fori(i,a,b) for(int i=(a);i<(b);i++)
#define mii map<int,int>
#define pb push_back
#define vii vector<int>
#define F first
#define S second
#define SET(a,b) memset(a,b,sizeof(a))
#define sortv(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long
#define INF 0x3f3f3f3f
// map <int, int> mapi;
ll int t_count=0;
string g_vowel="aouie";
int min(int a, int b){
  int c = (a<b) ? a:b;
  return c;
}
int main(){
  fast;
  ll t;
  cin>>t;
  cout<<(9*t)<<" "<<(8*t)<<"\n";
  // vector <pair<ll,ll>> v;
  // ll a,b;
  // cin>>a>>b;
  // v.pb(make_pair(a,b));
  // t--;
  // ll i=1;
  // int flag=1;
  // while(t--){
  //   cin>>a>>b;
  //   v.pb(make_pair(a,b));
  //   if(min(v[i].first,v[i].second)>max(v[i-1].first,v[i-1].second)){
  //     flag=0;
  //   }
  //   i++;
  // }
  // puts(flag ? "YES" : "NO");
  return 0;
}
// You need to check if after every letter except one of for these "aouien", there goes one of these "aouie". Do not forget to check the last letter.
// you need to iterate over the rectangles from left to right and turn each rectangle in such a way that its height is as big as possible but not
//  greater than the height of the previous rectangle (if it's not the first one). If on some iteration there is no such way to place the
//   rectangle, the answer is "NO".
