#include <bits/stdc++.h>
#define sz(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ return (a.second < b.second); } 
double ans=0;int n;
double c;
map<pair<int,double>, double> store;
int dp(vector<pair<double, double>> v, double c, int index, double loc_ans)
{
    if((c<=0 or index>=n) and store[{index,c}]==0)
        {
            ans=max(ans, loc_ans);
            store[{index,c}]=ans;
            return ans;
        }
    else if(c>=v[index].second and store[{index,c}]==0)
    {
        store[{index,c}]=max(dp(v,c,index+1,loc_ans), dp(v,c-v[index].second,index+1,loc_ans+v[index].first));
        return store[{index,c}];
    }
    else if(store[{index,c}]==0)
    {
        store[{index,c}]=max(dp(v,0,index+1,loc_ans + (v[index].first)*(c/v[index].second) ), dp(v,c,index+1,loc_ans));
        return store[{index,c}];;
    }
    return store[{index,c}];
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vector<ll> v(n);
        f(i,0,n)cin>>v[i];
        // int end=n-1,start=0;
        // ll max_start=-1,min_end=1000000007;
        // while(end>start)
        // {
        //     min_end=min(min_end, v[end]);
        //     end--;
        //     max_start=max(max_start, v[start]);
        //     start++;
        // }
        ll ans=0;
        r(i,n-1,0)
        {
            if(v[i]-v[i-1]<0)
            {
                ans+=abs(v[i]-v[i-1]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;cin>>n;
//     vector<unordered_map<int,int>> m(n+1);
//     for(auto i: m){cout<<i.first<<" "<<i.second<<endl;}
//     for(int i=0;i<n-1;i++)
//     {
//         int u,v;cin>>u>>v;
//         v[u]
//     }
//     return 0;
// }