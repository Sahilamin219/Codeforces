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
void solve_me()
{
  int n, q, k;
  cin>>n>>q>>k;
  vi v(n+1, 1);
  for(int i=0;i<n;i++)cin>>v[i];
  vi cal(n);
  cal[0] = (v[1]-v[0] -1) + (v[0] - 1);
  if(n>1)cal[n-1] = (k-v[n-1]) + (v[n-1] - v[n-2] - 1) ;
  for(int i=1;i<n-1;i++)
  {
    cal[i] = (v[i+1] - v[i] - 1) + (v[i] - v[i-1] - 1);
    // cal[i] = max(0, 1);
  }
  vi pre(n);
  pre[0]=cal[0];
  for(int i=1;i<n;i++)
  {
    pre[i] = pre[i-1] + cal[i];
  }
  // for(auto x:cal){cout<<x<<" ";}cout<<"\n";
  // for(auto x:pre){cout<<x<<" ";}cout<<"\n";

  while(q--)
  {
    int a, b;cin>>a>>b;
    if(a==b)
    {
      cout<<k-1<<"\n";continue;
    }
    if (a == b - 1) {
      cout << k - v[b - 2] - 1 + v[a] - 2 << endl;
      continue;
    }
    cout << pre[b - 2] - pre[a - 1] + k - v[b - 2] - 1 + v[a] - 2 << endl;

  }
  return;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
	#endif
  // cout << fixed << setprecision(18);
  int TC=1;//cin>>TC;
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