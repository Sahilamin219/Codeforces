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
    int n;
    cin>>n;
    int i=n;
    while(i>1){
        // ui x=i;
        int y=0;
        if(n%i==0){
            // cout<<"yea";
            // y=countBits(i);
            y=int(log2(i));
            for(int j=0;j<y;j++){
                // cout<<" "<<(pow(2,2*j+1)-pow(2,j));
                if(i==(pow(2,2*j+1)-pow(2,j))){
                    cout<<i<<"\n";
                    return 0;
                }
            }
        }
        i--;
    }
    cout<<1;
    return 0;
}