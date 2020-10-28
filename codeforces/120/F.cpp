#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define pb push_back
using namespace std;
typedef vector<int> vi;
int h=0;
int leaf=0;
int d=0;
void dfs(vi tri[], int parent, int node, int lvl)
{
    for(auto x: tri[node])
    {
        if(x!=parent)dfs(tri,node,x,lvl+1);
    }
    if(h<lvl){leaf=node;}
    h=max(h,lvl);
}

void know_diameter(vi tri[], int parent, int node, int distance)
{
    for(auto x: tri[node])
    {
        if(x!=parent)know_diameter(tri,node,x,distance+1);
    }
    d=max(d,distance);
}

int cal(vi tri[])
{
    h=0;leaf=0;d=0;
    dfs(tri, -1, 1 ,0);
    know_diameter(tri, -1, leaf, 0);
    return d;
}

int main() {
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int q=0;cin>>q;
    int ans=0;
    while(q--)
    {
        int beads;cin>>beads;
        vi tri[beads];
        f(i,0,beads-1)
        {
            int a,b;cin>>a>>b;
            tri[a-1].pb(b-1);
            tri[b-1].pb(a-1);
        }
        ans+=cal(tri);
    }
    cout<<ans;
    return 0;
}