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
typedef unsigned int ui;
/* global declaration */
// unsigned countBits(unsigned int number) 
// {       
//       // log function in base 2 take only integer part 
//       return (int)log2(number)+1; 
// } 
int main(){
    fast;
    string str;
    cin>>str;
    string s="aba";
    vector <int> a(n(str),0);int count_a=0;
    vector <int> b(n(str),0);int count_b=0;
    fori(i,0,n(str)){
        if(str[i]=='a'){
            count_a++;
            a[i]=count_a;
        }
        else{
            a[i]=count_a;
        }
    }
    fori(i,0,n(str)){
        if(str[i]=='b'){
            count_b++;
            b[i]=count_b;
        }
        else{
            b[i]=count_b;
        }
    }
    // fori(i,0,n(str)){
    //     cout<<a[i]<<" ";
    // }cout<<"\n";
    // fori(i,0,n(str)){
    //     cout<<b[i]<<" ";
    // }cout<<"\n";
    int count=0;
    int count_f=max(count_b,count_a);
    if(n(str)<3){
        count_f=n(str);
    }
    else{
        fori(i,0,n(str)){
            fori(j,i,n(str)){
                count=a[n(str)-1]+a[i]-a[j]+b[j]-b[i];
                if(count>count_f){
                    count_f=count;
                    // cout<<count_f;
                    if(b[i]>0 && i==0){
                        count_f++;
                    //     if(a[n(str)-1]+a[i]-a[j]==0){
                    //         count_f++;
                    //         cout<<"ohyea";
                    //     }
                    //     else if(b[j]-b[i]>0 && a[n(str)-1]+a[i]-a[j]>0){
                    //         count_f+=a[n(str)-1]+a[i]-a[j];
                    //     }
                    }
                }
            }
        }
    }
    cout<<count_f;
    return 0;
}