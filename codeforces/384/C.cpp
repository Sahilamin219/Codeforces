#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100000
#define inf 1e18
#define MAXN 10000 
#define SQRSIZE  100 
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cerr<< #x << ':' << x << endl;
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define fit(it,c) for ( __typeof((c).begin()) it=(c).begin(); it!=(c).end(); it++ )
using namespace std;
typedef long long int ll;
long long maximum=numeric_limits<int>:: max();
typedef vector<ll> vi;
typedef vector<vi> vvi;
inline int bit( int x, int i ) { return (x>>i)&1; }
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{return (a.second < b.second);}
ll get_hash(ll x, ll y, ll z)
{
    return (z) + (3001)*(y) + (3001*3001*(x));
    // unordered_set<ll> trips;trips.find(prep + v) == trips.end()
}
ll com(ll n,ll m){
    ll ans=1;m=max(m,n-m);
    f(i,1,n-m){
        ans=(ans*(m+i))/i;
    }
    return ans;
}
// partial_sum(a , a+5 , b); 
// partial_sum(a , a+5 , b , myfun) ; 
int solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n);
    f(i,0,n)cin>>v[i];
    k=min(k,m-1);
    ll ans=-1;//maxs of mins of maxs
    int moves=m-1-k;//this us total opponents moves
    // i and j goes <= because last man also takes it's number & we choose from the rest
    for(int i=0;i<=k;i++)
    {
        ll temp_ans=1e18;
        for(int j=0;j<=moves;j++)
        {
            ll mini=max(v[i+j], v[i+j+n-m]);
            // this mini is being taken by opponenet so maximum
            temp_ans=min(temp_ans, mini);
            // here minimum is because we will get minimum 
        }
        ans=max(ans, temp_ans);
    }
    cout<<ans<<endl;
}
int n;
vi gr[150001];
vi iota(int n) {
    vi a(n);
    iota(all(a), 1);
    return a;
}
int get_parent(int i, vi par){while(par[i]!=i)i=par[i];return i;}
void dfs(int node)
{
    cout<<node<<" ";
    for(auto x:gr[node])
    {
        dfs(x);
    }
}
set<ll> s;
multiset<ll> dif; //x(i)-x(i-1)
ll a;
void add_postion(ll a)
{
    s.insert(a);
    // auto it=s.insert(a).first;
    auto it=s.find(a);
    // cout<<*it<<" ";
    if (next(it) != s.end())dif.insert(*next(it) - a);
    if (it != s.begin()) {
        dif.insert(a - *prev(it));
        if (next(it) != s.end()) dif.erase(dif.find(*next(it) - *prev(it)));
    }
}
void erase_position(ll a)
{
    auto it = s.find(a);
    if (next(it) != s.end()) dif.erase(dif.find(*next(it) - a));
 
        if (it != s.begin()) {
            dif.erase(dif.find(a - *prev(it)));
            if (next(it) != s.end())dif.insert(*next(it) - *prev(it));
        }
        s.erase(it);
}
ll query()
{
    if (s.size() <= 2)return 0;
    return *(--s.end()) - *s.begin() - *(--dif.end());
    // *---*-*.........*---*----*
}
vi adj_test[11];
vi h(11,0);
auto par=iota(11);
void dfs_test(int v,int p = -1)
{
    if(p + 1) { h[v] = h[p] + 1; }
    par[v] = p;
    for(auto u : adj_test[v])
    {
        if(p - u)dfs_test(u,v);//not to avoid cycle bcuz its a tree
    }
}
int LCA(int v,int u){
    if(v == u)
        return v;
    if(h[v] < h[u])
        swap(v,u);
    return LCA(par[v], u);
}
int TIME=0;
vi st(11,0);
vi ft(11,0);
vi color(11,-1);
void dfs_time(int v)
{
        st[v] = TIME++;
        color[v]=1;// color[v] = gray;
        for(auto u :adj_test[v])
        {
            if (color[u] == -1) dfs_time(u);
        }
        // color[v] = black;
        ft[v] = TIME;// or we can use TIME ++
}  
int arr[MAXN];               // original array 
int block[SQRSIZE];          // decomposed array 
int blk_sz;                      // block size  
// Time Complexity : O(1) 
void update(int idx, int val) 
{ 
    int blockNumber = idx / blk_sz; 
    block[blockNumber] += val - arr[idx]; 
    arr[idx] = val; 
} 
bool bin_search(int x[], int n, int k) {
    int p = 0;
    for (int a = n; a >= 1; a /= 2) {
        while (p+a < n && x[p+a] <= k) p += a;
    }
    return x[p] == k;
}
int count_same(int x[], int n, int k) {
    int p = -1, q = -1;
    for (int a = n; a >= 1; a /= 2) {
        while (p+a < n && x[p+a] < k) p += a;
        while (q+a < n && x[q+a] <= k) q += a;
    }
    return q-p;
}
// Time Complexity : O(sqrt(n)) 
int query(int l, int r) 
{ 
    int sum = 0; 
    while (l<r and l%blk_sz!=0 and l!=0) 
    { 
        // traversing first block in range 
        sum += arr[l]; 
        l++; 
    } 
    while (l+blk_sz <= r) 
    { 
        // traversing completely overlapped blocks in range 
        sum += block[l/blk_sz]; 
        l += blk_sz; 
    } 
    while (l<=r) 
    { 
        // traversing last block in range 
        sum += arr[l]; 
        l++; 
    } 
    return sum; 
} 
// Fills values in input[] 
void preprocess(int input[], int n) 
{ 
    // initiating block pointer 
    int blk_idx = -1; 
  
    // calculating size of block 
    blk_sz = sqrt(n); 
  
    // building the decomposed array 
    for (int i=0; i<n; i++) 
    { 
        arr[i] = input[i]; 
        if (i%blk_sz == 0) 
        { 
            // entering next block 
            // incementing block pointer 
            blk_idx++; 
        } 
        block[blk_idx] += arr[i]; 
    } 
} 
void showdq(deque <ll> g) 
{ 
    deque <ll> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) cout<<*it<<' '; 
    cout<<'\n'; 
} 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // greedy math brute force # sorting pointers
    ll n;cin>>n;
    vi v(n);f(i,0,n)cin>>v[i];
    ll ans=0;
    vi cnt(n);
    cnt[n-1]=!v[n-1];
    r(i,n-2,-1)
    {
        cnt[i]+=cnt[i+1]+!v[i];
    }
    f(i,0,n)
    {
        if(v[i])
        {
            ans+=cnt[i];
        }
    }
    cout<<ans;
    // sort(all(v));
    // vi ans_v;
    // deque<ll> a,b;
    // f(i,0,n)
    // {
    //     // if(i%2)
    //     // {
    //     //     a.push(v[i]);
    //     // }
    //     // else
    //     // {
    //     //     b.push(v[i]);
    //     // }
    //     a.pb(v[i]);
    // }
    // deque<ll>c;
    // showdq(a);
    // while(a.size())
    // {
    //     if(a.size()>2)
    //     {
    //         ll x=-1,y=-1,z=-1;
    //         auto it1=a.begin();
    //         auto it2=a.end();--it2;
    //         if(a.size())x=*it1;it1++;
    //         if(a.size())y=*it1;
    //         if(a.size())z=*it2;
    //         ans_v.pb(x);
    //         ans_v.pb(y);
    //         ans_v.pb(z);
    //         a.pop_back();
    //         a.pop_front();
    //         a.pop_front();
    //         ans+=1;
    //     }
    //     else
    //     {
    //         auto it=a.begin();
    //         while(it!=a.end()){ans_v.pb(*it);it++;}
    //         // while(!b.empty())ans_v.pb(b.pop_front());
    //         break;
    //     }
    // }
    // cout<<ans<<"\n";
    // f(i,1,n-2)
    // {   
        
    // }   
    // for(auto x:ans_v)
    // {
    //     cout<<x<<" ";
    // }
    // ll n,m,a,b;cin>>n;//>>m;
    // // vi v(n);f(i,0,n)cin>>v[i];
    // f(i,0,n-1)
    // {
    //     cin>>a>>b;
    //     adj_test[a].pb(b);
    //     adj_test[b].pb(a);
    // }
    // dfs_test(1);
    // for(auto x:par){
    //     cout<<x<<" ";
    // }cout<<endl;
    // for(auto x:h){
    //     cout<<x<<" ";
    // }cout<<endl;
    // dfs_time(1);
    // for(auto x:st){
    //     cout<<x<<" ";
    // }cout<<endl;
    // for(auto x:ft){
    //     cout<<x<<" ";
    // }



    // int input[] = {1, 5, 2, 4, 6, 1, 3, 5, 7, 10}; 
    // int n = sizeof(input)/sizeof(input[0]); 
    // preprocess(input, n); 
    // cout << "query(3,8) : " << query(3, 8) << endl; 
    // cout << "query(1,6) : " << query(1, 6) << endl; 
    // update(8, 0); 
    // cout << "query(8,8) : " << query(8, 8) << endl; 
}
class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node* next;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
        Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
    int get_height_bfs(Node* root)
    {
        int h=0;// bfs
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            h++;
            Node* temp=q.front();
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
    }
    int get_Height(Node* root, int h)
    {
        if(root==nullptr)return h-1;
        else
        {
            return max(get_Height(root->left, h+1), get_Height(root->right, h+1));
        }
    }
    int getHeight(Node* root)
    {
        int ans=0;
        ans=get_Height(root, 0);
        return ans;
    }
    Node* removeDuplicates(Node *head)
          {   
              Node* current = head;
              while (current != nullptr && current->next != nullptr) {
                  Node* temp = current->next;
                  if (current->data == temp->data) { // duplicate found 
                      current->next = temp->next;
                      delete temp;
                  } else {
                     current = current->next;
                  }
              }

              return head;
          }
};
void make_tree()
{
    Solution myTree;
    Node* root = NULL;
    int t; cin >> t;
    int data;
    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;
}
class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;
  BinaryTree(int value) {this->value = value;left = NULL;right = NULL;}
};
void dfs(BinaryTree* root, int sum, vector<int>& ans)
{
        int sum1=sum,sum2=sum;
        if(root!=nullptr and root->left!=nullptr)sum1+=root->left->value;
        if(root!=nullptr)dfs(root->left,sum1, ans);
        if(root!=nullptr and root->right!=nullptr)sum2+=root->right->value;
        if(root!=nullptr)dfs(root->right,sum2, ans);
        if(root!=nullptr and root->right==nullptr and root->left==nullptr)ans.push_back(sum);
}
vector<int> branchSums(BinaryTree *root) {
    vector<int> ans={};
    if(root!=nullptr)dfs(root,root->value,ans);
  return {ans};
}
//prev->next = n->next;...fake and real ptr
// vector<int> v={1,2,3,3,14,4,5,5,6,6,7,7,8,5,10};
// sort(all(v));
// for(auto x:v){cout<<x<<" ";}cout<<endl;
// cout<<lower_bound(all(v), 6)-v.begin()<<" ";
// cout<<upper_bound(all(v), 6)-v.begin();
// lower_bound returns an iterator pointing to the first element in the range 
// [first,last) which has a value not less than ‘val’.
// upper_bound returns an iterator pointing to the first element in the range 
// [first,last) which has a value greater than ‘val’.


// https://codeforces.com/contest/965/submission/37617515
// https://recommender.codedrills.io/recommendations/a84cb4e1-1d54-4e0f-8f64-de726b77d05b
// https://recommender.codedrills.io/recommendations/ebfb9d6e-fbd3-434e-89fb-8070b449c9ed
// https://codeforces.com/problemset/problem/264/A
// https://codeforces.com/problemset/problem/276/C

/*
// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>> g;
vector<int> sz, p;
vector<int> centroids;

int n;

void dfs(const int &v, const int &anc) {
    sz[v] = 1;
    p[v] = anc;
    bool good = true;
    for (auto to : g[v]) {
        if (to == anc) continue;
        dfs(to, v);
        good &= (sz[to] * 2 <= n);
        sz[v] += sz[to];
    }
    good &= (sz[v] * 2 >= n);
    if (good) centroids.emplace_back(v);
}

int leaf(const int &v, const int &anc) {
    if (g[v].size() == 1) return v;
    for (auto to : g[v]) {
        if (to == anc) continue;
        int l = leaf(to, v);
        if (l != -1) return l;
    }
    return -1;
}

signed main() {
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        cout << fixed << setprecision(3);
    #else
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout << fixed << setprecision(15);
    #endif
    int T;
    cin >> T;
    while (T --> 0) {
        cin >> n;
        g.clear();
        sz.clear();
        p.clear();
        centroids.clear();
        g.resize(n);
        sz.resize(n);
        p.resize(n);
        for (int i = 0; i < n - 1; ++i) {
            int x, y;
            cin >> x >> y;
            --x; --y;
            g[x].emplace_back(y);
            g[y].emplace_back(x);
        }
        dfs(0, -1);
        int c1 = centroids[0];
        int c2 = -1;
        if (centroids.size() > 1) c2 = centroids[1];
        if (c2 == -1) {
            cout << 1 << ' ' << g[0][0] + 1 << '\n';
            cout << 1 << ' ' << g[0][0] + 1 << '\n';
        } else {
            if (sz[c2] > sz[c1]) swap(c1, c2);
            int l = leaf(c2, c1);
            cout << l + 1 << ' ' << p[l] + 1 << '\n';
            cout << l + 1 << ' ' << c1 + 1 << '\n';
        }
    }
    #ifdef LOCAL
    cerr << "proc time: " << 1.0 * clock() / CLOCKS_PER_SEC << "s    ";
    #endif
    return 0;
}
*/