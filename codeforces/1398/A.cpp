#include <bits/stdc++.h>
#define sz(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long int ll;
vector<int> days;
vector<int> per;
vector<int> a;//population
vector<int> b;//no.of fruits
vector<int> visted;
int n;
int traverse(vector<vector<int>> &v, int i, int j)
{
    b[v[per[i]][j]]-=a[per[i]];
    v[per[i]].erase(v[per[i]].begin()+j);
    if(b[per[i]]<=0 and visted[per[i]]==0)days[per[i]]=i+1,visted[per[i]]=1;
}
int dfs(vector<vector<int>> &v,vector<int> per, vector<int> &days)
{
    // for(auto x:per){cout<<x<<" ";}cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<v[per[i]].size();j++)
        // {
        //     b[v[per[i]][j]]-=a[per[i]];
        //     v[per[i]].erase(v[per[i]].begin()+j);
        //     if(b[per[i]]<=0 and visted[per[i]]==0)days[per[i]]=i+1,visted[per[i]]=1;
        // }
        traverse(v,per[i],j);
        if(b[per[i]])b[per[i]]-=a[per[i]];
        if(b[per[i]]<=0 and visted[per[i]]==0)days[per[i]]=i+1,visted[per[i]]=1;
        // for(int i=1;i<=n;i++){cout<<b[i]<<" ";}cout<<endl;
    }
}
//¬_¬ 
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
        if(v[0]+v[1]<=v[n-1])
        {
            cout<<1<<" "<<2<<" "<<n<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
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