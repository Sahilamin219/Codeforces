#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++) 
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int LL;
const long long int mx=100000;
const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
/* global declaration */

int main(){
    fast;
    int n;cin>>n;
    while(n--){
        string s;
        cin>>s;
        int count=0;//s.size()+1;
        s+="R";
        // cout<<s<<"\n";
        fori(i,0,s.size()){
            int temp=0;
            if(s[i]=='R'){
                int j=i+1;
                while(s[j]!='R' && j<s.size()){
                    j++;
                }
                temp=(j-i);
                // i=j;
            }
            if(count<temp){
                count=temp;
                // cout<<count<<" ";
            }
        }
        int temp=0,i=0;
        while(s[i]!='R'){
            i++;
        }
        temp=i+1;
        if(count<temp){
            count=temp;
        }
        cout<<count<<"\n";
    }
    return 0;
}