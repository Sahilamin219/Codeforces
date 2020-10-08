#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define sz(a) int(a.size())
#define f(i,a,b) for(int i=a;i<b;i++)
#define int long long
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int32_t main() {    
    clock_t start, end;
    start = clock(); 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // ordered_set d;
    // d.insert(1);
    // d.erase(1);
    // for (auto i: d) 
    // {
    //     cout << i << endl;
    // }
    int n;cin>>n;
    vector<int> v(n);f(i,0,n)cin>>v[i];
    map<int,int> ans;
    map<int, int> coming_gcd_outcome;
    map<int, int> pervious_gcd_outcome;
    f(i,0,n)
    {
        coming_gcd_outcome.clear();
        for(auto x: pervious_gcd_outcome)
        {
            coming_gcd_outcome[__gcd(v[i], x.first)]+=x.second;
        }
        coming_gcd_outcome[v[i]]++;
        for(auto x: coming_gcd_outcome )
        {
            ans[x.first]+=x.second;
        }
        swap(coming_gcd_outcome, pervious_gcd_outcome);
    }
    int q;cin>>q;
    while(q--)
    {
        int x;cin>>x;
        cout<<ans[x]<<"\n";
    }
    end = clock(); 
    double time_taken = double(end - start) / double(1000000); 
    cerr<<"Seconds taken by program is: "<<fixed<<time_taken<<setprecision(5)<<endl;
    return 0;
}
//--------------------------------------***rough***----------------------------------------
// return (m1=a>b?a:b)>(m2=c>d?c:d)?m1:m2;//compare four numbers
// bitset <32> b(n);
// cout<<b.count();

// let f(i) be the difference between the number of '1' and the number of '0' on the prefix of s
// of length i. We claim that the answer is max(f(i))−min(f(i)) and let's show why is it true.
// Let's build a function on a plane with points (i,f(i)). Then we can match each x between 
// min(f(i)) and max(f(i)) with some subsequence.

// void siev(ll n)
// {
//  sieve[0]=false;
//  sieve[1]=false;
//  for(ll i=2; i<=sqrtl(n); i++)
//  {
//      if(sieve[i])
//      {
//          for(ll j=i; i*j<=n; j++)
//          {
//          sieve[i*j]=false;
//          }
//      }
//  }
// }
// auto it=lower_bound(A.begin(),A.end(),B);
// int start=it-A.begin();
// auto it1=upper_bound(A.begin(),A.end(),B);
// int end=it1-A.begin();
// int ans=end-start;
// return ans;
// vector<int> p(3);
// iota(p.begin(), p.end(), 0);
// string q = "RGB";
// q.erase(q.find(s[i]), 1);
// string req = "abacaba";
// bool check(string s) {
//     auto it = s.find(req);
//     if (it == string::npos) return 0;
//     if ( s.find(req, it + 1) != string::npos) return 0;
//     return 1;
// }