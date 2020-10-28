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

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;cin>>n;
    map<pair<ll,ll> , vector<pair<ll,ll>> > m;
    ll r=0;
    int number=1, index_1=0, index_2=0;
    f(i,0,n)
    {
        vi temp(3);
        cin>>temp[0]>>temp[1]>>temp[2];
        sort(all(temp));
        m[{temp[2], temp[1]}].push_back( { temp[0], i+1 } );
        if(r<temp[0])index_1=i+1;
        r=max(r, temp[0]);
    }
    auto it=m.begin();
    for(;it!=m.end();it++)
    {
        vector<pair<ll, ll>> temp=it->second;
        sort(all(temp));
        // it->second=temp;
        ll last_r=r;
        ll newside=temp[temp.size()-1].first + temp[temp.size()-2].first;
        ll miniside= min(min(it->first.first, it->first.second), newside);
        if(temp.size()>=2)r=max(r, miniside);
        if(last_r<r)
        {
            number=2;
            index_1=temp[temp.size()-1].second;
            index_2=temp[temp.size()-2].second;
        }
    }
    cout<<number<<endl;
    if(index_2)cout<<index_1<<" "<<index_2;
    else cout<<index_1;
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
