#include "bits/stdc++.h"
#include <string_view>
#define int long long
#define all(x) begin(x), end(x)
using namespace std;
typedef vector<int> vi;
// T(n) = sum_i=1^n(T(i-1) * T(n-i))
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
int takemod(int a){return ((a%mod)+mod)%mod;}
int fast_exp(int base, int expo) {
  int res=1;
  while(expo>0) {
    if(expo&1) res=(res*base)%mod;
    base=(base*base)%mod;
    expo>>=1;}
  return res;}
 
int modinv(int a){return takemod(fast_exp(takemod(a), mod-2));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
int get_pow(int b, int c)
{
  int ans=1;
  while(c>0)
  {
    if(c&1)ans=(ans*b)%4;
    b=(b*b)%4;
    c>>=1;
  }
  return ans%4;
}
void solve_me()
{
  int a,b,c;
  cin>>a>>b>>c;
  int d=a%10;
  if(d==0)
  {
    cout<<"0\n";return;
  }
  if(d==1)
  {
    cout<<"1\n";return;
  }
  map<int, int> m;
  int v=d;
  for(int i=1;i<=4;i++)
  {
    m[i]=v;
    v*=d;
    v%=10;
  }
  // int x=pow(b, c,4);
  // x%=4;
  int x=get_pow(b, c);
  if(x==0)x=4;
  cout<<m[x]<<"\n";
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	solve_me();
}