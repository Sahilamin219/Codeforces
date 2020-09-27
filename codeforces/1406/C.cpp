// "I don't need anyone. I just need everyone and then some"
#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100000
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cerr<< #x << ':' << x << endl;
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define fit(it,c) for ( __typeof((c).begin()) it=(c).begin(); it!=(c).end(); it++ )
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{return (a.second < b.second);}

vi visited;
void dfs_cal_size( vector<int> tri[], int ind, vector<int> &cal, vi& par, vi& leaf)
{
    cal[ind]=1;
    leaf[ind]=ind;
    visited[ind]=1;
    for(auto x: tri[ind])
    {
        if(x!=ind and !visited[x])
        {
            dfs_cal_size( tri, x, cal, par, leaf);
            cal[ind]+=cal[x];
            par[x]=ind;
            leaf[ind]=x;
        }
    }
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;int a,b;
        vector<int> tri[n+1];
        vector<int> cal(n+1, 0);
        f(i,0,n-1)
        {
            cin>>a>>b;
            tri[a].pb(b);
            tri[b].pb(a);
        }
        if(n&1)
        {
            cout<<a<<" "<<b<<"\n";
            cout<<a<<" "<<b<<"\n";
            continue;
        }
        visited.clear();visited.resize(n+1);
        vi par(n+1), leaf(n+1);
        dfs_cal_size(tri, 1 , cal, par, leaf);
        int flag=1, centroid_1=0, centroid_2=0;
        f(i,1,n+1)
        {
            if(cal[i]==n/2)
            {
                flag=0;
                centroid_1=i;
                centroid_2=par[centroid_1];
                break;
            }
        }
        if(flag)
        {
            cout<<a<<" "<<b<<"\n";
            cout<<a<<" "<<b<<"\n";
        }
        else
        {
            cout<<leaf[centroid_1]<<" "<<par[leaf[centroid_1]]<<"\n";
            cout<<leaf[centroid_1]<<" "<<centroid_2<<"\n";
        }
    }
}