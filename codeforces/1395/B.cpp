#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long int ll;
int printLevels(vector<int> graph[], int V, int x, int c) 
{ 
    int level[V]={0}; 
    bool marked[V]={0}; 
    queue<int> que; 
    que.push(x); 
    level[x] = 0; 
    marked[x] = true; 
    while (!que.empty()) { 
        x = que.front(); 
        que.pop(); 
        for (int i = 0; i < graph[x].size(); i++) { 
            int b = graph[x][i]; 
            if (!marked[b]) { 
                que.push(b); 
                level[b] = level[x] + 1; 
                marked[b] = true; 
            } 
        } 
    } 
    vector <int> store;
    for (int i = 1; i < V; i++){
        store.push_back(level[i]);
    }
    sort(store.rbegin(), store.rend());
    long long int sum=0;
    for(int i=0;i<c;i++){
        sum+=store[i];
    }
    return sum;
} 
int main() 
{ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // int n,c; 
    // cin>>n>>c;
    // vector<int> graph[n+1]; 
    // bool flag=1;
    // int k;
    // graph[0].push_back(0);
    // for(int i=0;i<n-1;i++){
    //     int v1,v2;cin>>v1>>v2;
    //     if(flag){
    //         k=v1;
    //         flag=0;
    //     }
    //     graph[v1].push_back(v2);
    //     graph[v2].push_back(v1);
    // }
    // cout<<printLevels(graph, n+1, k, c)<<endl; 
    int n,m,x,y;
    cin>>m>>n>>x>>y;
    int cnt=0;
    f(i,0,m*n)
    {
        x=(x%(m+1));
        y=(y%(n+1));
        if(!x)x++;
        if(!y)y++;
        cout<<x++<<" "<<y<<endl;
        cnt++;
        if(cnt==m)
        {
            cnt=0;
            y++;
            x--;
        }
    }
    return 0; 
} 
// https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1/