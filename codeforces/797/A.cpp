#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fg(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
// const long long int mod=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
#define c(n) cin>>n;
#define endl "\n";
#define INF 0x3f3f3f3f;
/* global declaration */
bool flag_g=0;
string gg="abcdefghijklmnopqrstuvwxyz";
string gv="aeiouy";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
int g_a[10];
void cojm(string s,ll i){
    string str;
    ll store_j=0;
    f(i,0,s(s)){
        ll j=s[i]-'0';
        if(store_j<j) {store_j=j;}
        else continue;
        while(j--){
            str+='(';
        }
        str+=s[i];j=i+1;
        while(s[i]==s[j] and j<s(s)){
            j++;str+=s[i];
            i++;
        }
        j=s[i]-'0';
        if(store_j<j) {store_j=j;}
        while(j--){
            str+=')';
        }// 0((2))(1)(((3)))(1)((2))((((4))))((22))(1)
    }// 0((2)1)(((3))1(2))((((4))))((2))((2))(1)
    cout<<"Case #:"<<i<<" "<<str<<endl;
}
int fac(ll i){
    if(i<=1){
        return 1;
    }
    return(i*fac(i-1));
}
// int get(ll i){
//     i=fac(i);
//     ll a[4]={2,3,5,7};
//     ll j=0,it=0,k=0;
//     while(i>1 and it<4){
//         if(i%a[it]==0){
//             i/=a[it];
//             j+=(a[it])*(pow(10,k));
//             it=0;k++;
//         }
//         else{
//             it++;
//         }
//     }
//     return j;
// }
// void make(){
//     f(i,1,9){
//         g_a[i]=get(i);
//     }
// }
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if(a.first==b.first){
        return a.second<b.second;
    }// return (a.second<b.second);
    return (a.first>b.first);
    return false;
}
string reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
    return str;
} 
vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll n,a;c(n);c(a);
    vector<ll> k=trial_division1(n);
    // for(auto x: k)cout<<x<<" ";
    // for(auto x: k)cout<<x<<" ";
    if(a>s(k)) cout<<-1<<"\n";
    else{
        while(s(k)!=a){
            k[0]=k[0]*k[s(k)-1];
            k.erase(k.end()-1,k.end());
        }
        for(auto x: k)cout<<x<<" ";
        cout<<endl;
    }
    // string s,str;
    // c(s);
    // make();
    // for(auto x: g_a)cout<<x<<" ";
    // f(i,0,s(s)){
    //     int temp=int(s[i]-'0');
    //     int take=g_a[temp];
    //         str+=to_string(take);
    // }
    // sort(str.rbegin(), str.rend());
    // int i=s(str)-1;
    // while(str[i]=='0'){
    //     str.erase(i);
    // }
    // cout<<str<<"\n";
    // puts(flag?"NO":"YES");
    return 0;
}