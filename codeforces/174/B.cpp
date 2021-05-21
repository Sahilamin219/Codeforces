#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

///assic value of ('0'-'9') is(48 - 57) and (a-z) is (97-122) and (A-Z) is(65-90) and 32 for space
typedef long long int ll;
typedef pair<ll, ll> pii;
typedef vector<pii> vii;
typedef vector<char> VEC1D;
typedef vector<VEC1D> VEC2D;
typedef vector<VEC2D> VEC3D;
typedef vector<ll> VEC1Dll;
typedef vector<VEC1Dll> VEC2Dll;
typedef vector<VEC2Dll> VEC3Dll;
typedef cc_hash_table<ll, ll, hash<ll>> ht;
typedef gp_hash_table<int, int> gt;

#define  pb push_back
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fo(i,a,b) for(ll i = a; i<=b;i++)
#define rf(i,a,b)  for(ll i=a;i>=b;i--)
#define vll vector<ll>
#define tests() int test_cases ; cin >> test_cases ; while(test_cases--)
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(),v.end()
#define MAXN 100001
#define MOD 1000000007
#define deb(x) cout << '>' << #x << ':' << x << endl;
#define sp " "
#define MS(x,y) memset(x,y,sizeof(x))

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
unordered_map<char, int, custom_hash> safe_map;
gp_hash_table<long long, int, custom_hash> safe_hash_table;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    ll n = s.size();

    deque<ll> v;
    ll cnt = 0;
    rf(i,n-1,0){
        if(s[i] == '.'){
            v.push_front(cnt);
            if(v.size() == 1){
                if(cnt >3||cnt<1){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            else {
                if(cnt >11 || cnt < 2){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            cnt = 0;
        }
        else {
            cnt++;
        }
    }
    if(cnt >8 || cnt <1){
        cout<<"NO"<<endl;
        return 0;
    }
    if(v.size() == 0){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    ll num = cnt;
    f(i,0,n){
        if(s[i] == '.'){
            num = 1;
            while(v.front() - num>8)num++;
            cout<<s[i];
            if(v.size() == 1)num = 3;
        }
        else {
            if(num == 0){
                cout<<endl;
                cout<<s[i];
                num = v.front() - 1;
            v.pop_front();
            }
            else {
                cout<<s[i];
                num--;

            }
        }
    }

    return 0;
}
