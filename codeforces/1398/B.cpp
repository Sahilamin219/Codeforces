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
        string st;cin>>st;
        int n=sz(st);
        vector<int> v(n,0);
        if(st[0]=='1')v[0]=1;
        f(i,1,n)
        {
            if(st[i]=='1')
            {
                v[i]=v[i-1]+1;
                v[i-1]=0;
            }
        }
        sort(rall(v));
        int ans=0;
        int flag=1;
        // for(auto x:v){cout<<x<<" ";}
        f(i,0,n)
        {
            if(flag)
            {
                ans+=v[i];
            }
            flag=!flag;
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