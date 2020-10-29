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
template <typename T,typename... Types>
void sout(T var1,Types... var2){
    cout<<var1<<" ";
    sout(var2...);
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll k;cin>>k;
    map<ll, pair<ll, ll>>m;
    set<ll> s;
    f(i,0,k)
    {
        ll n;cin>>n;vi v(n);f(j,0,n)cin>>v[j];
        ll sum=accumulate(all(v) ,0);
        f(j,0,n)if(s.find(sum-v[j])!=s.end()) { cout<<"YES\n";cout<<m[sum-v[j]].first+1<<" "<<m[sum-v[j]].second+1<<"\n";cout<<i+1<<" "<<j+1<<"\n";goto skip; }
        f(j,0,n)m[sum-v[j]]={i,j},s.insert(sum-v[j]);
    }
    // auto it=m.begin();
    // auto next_it=next(it);
    // for(;next_it!=m.end();it++,next_it++)
    // {
    //     // cout<<it->first<<" "<<next_it->first<<endl;
    //     if(it->first==next_it->first and it->second.first!=next_it->second.first)
    //     {
    //         cout<<it->second.first<<" "<<it->second.second<<"\n";
    //         cout<<next_it->second.first<<" "<<next_it->second.second<<"\n";
    //         goto skip;
    //     }
    // }
    cout<<"NO\n";
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
