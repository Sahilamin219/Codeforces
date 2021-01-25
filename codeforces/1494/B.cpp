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
    expo>>=1;
  }
  return res;
}
 
int modinv(int a){return takemod(fast_exp(takemod(a), mod-2));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
void solve_me()
{
  int n,u,r,d,l;cin>>n>>u>>r>>d>>l;
  int u1=0,r1=0,l1=0,d1=0;
  int f=1;
  if(u>=2&&r>=2&&l>=2&&d>=2){
      cout<<"YES\n";return;
  }
  if(u==n){
      l1++;
      r1++;
  }if(d==n){
      l1++;r1++;
  }if(r==n){
      u1++;
      d1++;
  }if(l==n){
      u1++;
      d1++;
  }
              
              
  if(u==n-1){
      if(l<l1+1&&r<r1+1)f=0;
      if(l>=l1+1)l1++;
      else if(r>=r1+1) r1++;
      else f=0;
  }if(d==n-1){
      if(l<l1+1&&r<r1+1)f=0;
      if(l>=l1+1)l1++;
      else if(r>=r1+1)r1++;
      else f=0;
  }if(r==n-1){
      if(u<u1+1&&d<d1+1)f=0;
      if(u>=u1+1)u1++;
      else if(d>=d1+1) d1++;
      else f=0;
  }if(l==n-1){
      if(u<u1+1&&d<d1+1)f=0;
      if(u>=u1+1)u1++;
      else if(d>=d1+1) d1++;
      else f=0;
  }if(u1>u||d1>d||l1>l||r1>r)f=0;
  if(f)cout<<"YES\n";
  else cout<<"NO\n";

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
// https://app.pluralsight.com/course-player?clipId=db4472d5-8c3b-416a-857b-f483e8fd9d82
// Approach 1: Linear Scan //         // cyclic sort - place all numbers to match their indexes 
// http://www.ijesrt.com/issues%20pdf%20file/Archives-2014/March-2014/86.pdf
// https://www.eetimes.com/power-dissipation-in-portables-design-considerations-using-low-power-cmos-ics/

// https://recommender.codedrills.io/recommendations/a84cb4e1-1d54-4e0f-8f64-de726b77d05b
// https://recommender.codedrills.io/recommendations/ebfb9d6e-fbd3-434e-89fb-8070b449c9ed
int minSwapToMakeArraySame(int a[], int b[], int n)
{
    // map to store position of elements in array B
    // we basically store element to index mapping.
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[b[i]] = i;
 
    // now we're storing position of array A elements
    // in array B.
    for (int i = 0; i < n; i++)
        b[i] = mp[a[i]];
 
    /* We can uncomment this section to print modified
      b array
    for (int i = 0; i < N; i++)
        cout << b[i] << " ";
    cout << endl; */
 
    // returing minimum swap for sorting in modified
    // array B as final answer
    return 1;//minSwapsToSort(b, n);
}