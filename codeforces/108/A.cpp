#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define endl "\n"
#define F first
#define S second

#define mp map<ll,ll>
#define vc vector<ll>

#define MAX  *max_element
#define MIN  *min_element
//max xor btw range of two numbers..
#define max_XOR(a,b) (1 << int(log2(a ^ b) + 1)) - 1
#define c_ones(number) __builtin_popcountll(number)
#define flip_bits(number) static_cast<unsigned>(~number)

#define all(X) X.begin(),X.end()
#define rep(i,n) for(ll i=0;i<n;i++)
#define loop(itr,n) for(itr=n.begin();itr!=n.end();itr++)

#define FLUSH fflush(stdout)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

typedef pair<int, int> pairs; 
 
int main(){
    int a,b;
    scanf("%d:%d", &a,&b);
    // cout<<a<<":"<<b;
    int c=0;
    c=(a%10)*10+(a/10);
    // cout<<c;
    if(a==23){
        if(b<32){
            cout<<a<<":"<<32;
        }
        else{
            cout<<"00"<<":"<<"00";
        }
    }
    else if(a==15 && b>15){
        cout<<"20:02";   
    }
    else if(a==16 || a==17 || a==18 || a==19){
        cout<<"20:02";
    }
    else if(a==6 || a==7 || a==8 || a==9){
        if(b<a){
            cout<<"0"<<a<<":"<<"0"<<a;
        }
        else{
            cout<<"10:01";
        }
    }
    else{
        if(b>=c){
            a++;
            c=(a%10)*10+(a/10);
            b=c;
            if(a<10){
                cout<<"0"<<a<<":"<<b;
            }
            else{
                cout<<a<<":"<<b;
            }
        }
        else{
            b=c;
            if(a<10){
                cout<<"0"<<a<<":"<<b;
            }
            else{
                cout<<a<<":"<<b;
            }
        }
    }
	return 0;
}