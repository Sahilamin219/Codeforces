#include <bits/stdc++.h>
#define S(a) int(a.size())
#define fori(i,a,b) for(long long int i=a;i<b;i++)
#define foir(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define INT_BITS 32
typedef long long int ll;
// const long long int mx=100000;
// const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
/* global declaration */
bool flag_g=0;
// string gg="abcdefghijklmnopqrstuvwxyz";
// string gv="aeiouy";//"AOYEUI";
bool check(ll n) {
    ll m=(pow(n,0.5));
    if( n==2 || n==3 ){
        return true;
    }
    if( n%2==0 || n%3==0 ){
        return false;
    }
    for(ll i=5 ; i<m+1 ; i+=6 ){
        if( n%i==0 || n%(i+2)==0 ){
            return false;
        }
    }
    return true;
}
// string decToBinary(int n) 
// { 
//     // array to store binary number 
//     ll binaryNum[64]; 
  
//     // counter for binary array 
//     ll i = 0; 
//     while (n > 0) { 
  
//         // storing remainder in binary array 
//         binaryNum[i] = n % 2; 
//         n = n / 2; 
//         i++; 
//     } 
  
//     // printing binary array in reverse order
//     string s=""; 
//     for (ll j = i - 1; j >= 0; j--) 
//         s+=to_string(binaryNum[j]);
//     return s; 
// } 
// string swap(string s){
//     string temp="";
//     temp+=s[S(s)-1];
//     fori(i,0,S(s)-1){
//         temp+=s[i];
//     }
//     return temp;
// }
// int binaryToDecimal(string m) 
// { 
//     // cout<<"mis"<<m<<" ";
//     ll n=0;
//     ll f=S(m)-1;
//     fori(i,0,S(m)){
//         n+=(m[f-i]-'0')*(pow(2,i));
//     }
//     return n;
// } 
// int rightRotate(ll n, unsigned int d) 
// { 
//     return (n >> d)|(n << (INT_BITS - d)); 
//     // ll m=log2(n)+1;
//     // return (n >> d)|(n << (m - d)); 
// } 
// int ror(ll x, ll L, ll N) 
// {
//     ll lsbs = x & ((1LL << L) - 1LL);
//     return (x >> L) | (lsbs << (N-L));
// }
bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string a="";// "A", "O", "Y", "E", "U", "I",
    fori(i,0,S(s)){
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){
            continue;
        }
        else{
            a+=s[i];
        }
    }
    string k="";
    ll n=S(a);
    while(n--){
        k+=".";
    }
    string b="";
    fori(i,0,S(a)){
        b+=k[i];
        b+=a[i];
    }
    cout<<b<<"\n";
    return 0;
}
// to take xor of string just apply logic