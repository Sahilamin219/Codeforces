#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fr(i,a,b) for(long long int i=a;i>b;i--)
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
int arr[MAX], n;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{return (a.second < b.second);}

int h=0;
int leaf=0;
int d=0;
void dfs(vi tri[], int parent, int node, int lvl)
{
    for(auto x: tri[node])
    {
        if(x!=parent)dfs(tri,node,x,lvl+1);//,h=max(h,lvl+1);
    }
    if(h<lvl){leaf=node;}
    h=max(h,lvl);
}

void know_diameter(vi tri[], int parent, int node, int distance)
{
    for(auto x: tri[node])
    {
        if(x!=parent)know_diameter(tri,node,x,distance+1);//,h=max(h,distance+1);
    }
    // cout<<d<<" ";
    d=max(d,distance);
}

int cal(vi tri[])
{
    h=0;leaf=0;
    dfs(tri, -1, 1 ,0);
    // return h;
    // cout<<leaf<<"\n";
    know_diameter(tri, -1, leaf, 0);
    return d;
}

bool my_sort(const string &a, const string &b) 
{return (a.size() < b.size());}


int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;cin>>n;
    vector<string> v(n);
    f(i,0,n)cin>>v[i];
    sort(all(v), my_sort);
    // f(i,0,n)cout<<v[i]<<endl;
    f(i,0,n-1)
    {
        size_t found;
        found=v[i+1].find(v[i]);
        // cout<<found<<" ";
        if(found!=string::npos)continue;
        else {cout<<"NO\n";goto skip;}
    }
    cout<<"YES\n";
    f(i,0,n)cout<<v[i]<<endl;
    skip:;
    return 0;
}
// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
  
// main function to do heap sort 
void heapSort(int arr[], int n) 
{ 
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    // One by one extract an element from heap 
    for (int i=n-1; i>0; i--) 
    { 
        // Move current root to end 
        swap(arr[0], arr[i]); 
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 
