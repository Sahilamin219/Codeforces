#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define sz(a) int(a.size())
#define f(i,a,b) for(int i=a;i<b;i++)
#define int long long
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int n,m, timer=0;
vector<int> starting(200001), ending(200001), value(200001), bit(400002), height(200001);//, sgn(200001);

void update(int x, int val)
{
    for(int i=x;i<=2*n; i+=i&(-i) )bit[i]+=val;
}

int query(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=bit[x];
        x-=x&(-x);
    }
    return sum;
}

void dfs(int node, int parent, vector<int> gr[])//, int sign)
{
    starting[node]=++timer;
    height[node]=node==1?0:height[parent]+1;
    // sgn[node]=sign;
    for(auto x: gr[node])
    {
        if(x!=parent)dfs(x, node, gr);//, -sign);
    }
    ending[node]=timer;
}

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
    cin>>n>>m;
    vector<int> gr[n+1];
    f(i,1,n+1)cin>>value[i];
    f(i,0,n-1)
    {
        int a,b;cin>>a>>b;
        gr[b].push_back(a);
        gr[a].push_back(b);
    }
    dfs(1,-1, gr);//, 1);
    while(m--)
    {
        int type,node_x;cin>>type>>node_x;
        if(type==1)
        {
            int val;cin>>val;
            if(height[node_x]&1)val=-val;
            update(starting[node_x], val);
            update(ending[node_x]+1, -val);
        }
        else
        {
            int sgn = 1;
            if(height[node_x]&1)sgn=-1;
            int ans=query(starting[node_x])*sgn;
            cout<<value[node_x]+ans<<endl;
        }
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