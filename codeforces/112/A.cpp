#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++) 
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
const long long int mx=100000;
const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
int flag_g=0;

int main(){
    fast;
    // ll t;
    // cin>>t;
    // string a;
    // getline(cin,a);
    // while(t--){
        string str;
        // string s="";
        cin>>str;
        // getline(cin, str);
        // cout<<str<<" ";
        // string k="";
        // int flag=0;
        // ll n=str.size();
        // ll f=1,ff=1;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        string st;cin>>st;
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        // fori(i,0,n){
        //     if(str[i]==' ' && flag==0){
        //         ff=0;
        //         flag=1;
        //         s="";
        //         s+=str[0];
        //         s+=".";
        //         k+=str[i+1];
        //     }
        //     else if(str[i]==' ' && flag==1){
        //         f=0;
        //         s="";
        //         s+=str[0];
        //         s+=".";
        //         s+=k;
        //         s+=".";
        //     }
        //     else{
        //         s+=str[i];
        //         // cout<<"hi";
        //     }
        // }
        // if(f==0){
        //     transform(s.begin(), s.begin()+4, s.begin(), ::toupper); 
        // }
        // else if(ff==0){
        //     transform(s.begin(), s.begin()+3, s.begin(), ::toupper); 
        // }
        // else{
        //     transform(s.begin(), s.begin()+1, s.begin(), ::toupper); 
        // }
        int s=0;
        if(str>st){
            s=1;
        }
        else if(st>str){
            s=-1;
        }
        cout<<s<<"\n";
    // }
    return 0;
}