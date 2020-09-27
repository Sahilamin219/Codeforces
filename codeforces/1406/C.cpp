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

map<string, vector<string>>  m;
int ans=0;
map<string, int>  vis;

void dfs(string s, int h)
{
    vis[s]=1;
    for (auto x: m[s])
    {
        if(!vis[x])
        {
            dfs(x ,h+1);
        }
    } 
    ans=max(ans , h);
}
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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // brute force greedy math 
    // __builtin_popcount
    // no more than two centroids
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
        // par.clear();leaf.clear();
        // par.resize(n+1);leaf.resize(n+1);
        visited.clear();visited.resize(n+1);
        vi par(n+1), leaf(n+1);
        dfs_cal_size(tri, 1 , cal, par, leaf);
        // for(auto x:cal){cout<<x<<" ";}cout<<endl;
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
// ifstream  i_data("data.in");
// ofstream  o_data("data.out");
// #define cin  i_data
// #define cout o_data
//ifstream cin("b_read_on.txt"); ofstream cout("output3.txt");
//Use (<<) for multiplication
//Use (>>) for division
//ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout<<fixed;cerr.tie(NULL);
// find_by_order -> value at index
// order_of_key -> index of value
// while using (1<<i) use ((ll)1<<(ll)i) 
// in Floyd-Warshall Algo, k is outer loop 
// If an element was not initially in map and if asked mp[a],the element gets inserted 
// a%=mod take a lot of time... try to use it minimum and use memset as it reduces a lot of time usage...use if(a>=mod) a%=mod
//cout<<(double) can be harmful , always use printf(%.9llf)...take scanf("%lf",&p[i][j]) as input , not llf;
//use s.erase(it++) for erasing iterator and then moving to the next one
//never use adj.resize(n) as value is persistent, always erase
//use __builtin_popcountll() for ll
// no of prime numbers in range : (70,19) , (1000,168) , (100000,1229) , (sqrt(10^9),3409) ;
//always check the use of segment tree using bottom-    up dp
//__gcd(0,0) gives runtime error
//power(a,b) == power(a,b%phi(a)) Fermet's Theorem
//never use "=" operator in compare function
//For checking odd cycles, check bipartite


// There is a similar example in Java, but I wanted to share my solution using the
// new C++11 unordered_map and a list. The good thing about lists is that iterators 
// are never invalidated by modifiers (unless erasing the element itself).
// This way, we can store the iterator to the corresponding LRU queue in the values
// of the hash map. Since using erase on a list with an iterator takes constant time,
// all operations of the LRU cache run in constant time.

class LRUCache {
public:
    LRUCache(int capacity) : _capacity(capacity) {}
    
    int get(int key) {
        auto it = cache.find(key);
        if (it == cache.end()) return -1;
        touch(it);
        return it->second.first;
    }
    
    void set(int key, int value) {
        auto it = cache.find(key);
        if (it != cache.end()) touch(it);
        else {
            if (cache.size() == _capacity) {
                cache.erase(used.back());
                used.pop_back();
            }
            used.push_front(key);
        }
        cache[key] = { value, used.begin() };
    }
    
private:
    typedef list<int> LI;
    typedef pair<int, LI::iterator> PII;
    typedef unordered_map<int, PII> HIPII;
    
    void touch(HIPII::iterator it) {
        int key = it->first;
        used.erase(it->second.second);
        used.push_front(key);
        it->second.second = used.begin();
    }
    
    HIPII cache;
    LI used;
    int _capacity;
};

// -----------------------------------------------------------------------------------

class LRUCache_2 {
private:
    int capacity;
    list<int> recent;
    unordered_map<int, int> cache;
    unordered_map<int, list<int>::iterator> pos;
    void use(int key) {
        if (pos.find(key) != pos.end()) {
            recent.erase(pos[key]);
        } else if (recent.size() >= capacity) {
            int old = recent.back();
            recent.pop_back();
            cache.erase(old);
            pos.erase(old);
        }
        recent.push_front(key);
        pos[key] = recent.begin();
    }
public:
    LRUCache_2(int capacity): capacity(capacity) {}
    int get(int key) {
        if (cache.find(key) != cache.end()) {
            use(key);
            return cache[key];
        }
        return -1;
    }
    void set(int key, int value) {
        use(key);
        cache[key] = value;
    }
};