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
    FAST;
    string str="^>v<^>v<^>v<";
	string s;
	cin>>s;
	int index=4;
	while(s[0]!=str[index]){
	    index++;
	}
	string e;
	cin>>e;
	long long int n;
	cin>>n;
	long long int k=(n%4);
	int flag_cw=0;
	int flag_ccw=0;
	int flag_und=0;
	if(e[0]==str[index+k]){
	    flag_cw=1;
	}
	if(e[0]==str[index-k]){
	    flag_ccw=1;
	}
	if(flag_ccw==flag_cw){
	    flag_und=1;
	}
	if(flag_und==1){
	    cout<<"undefined";
	}
	else if(flag_ccw==1){
	    cout<<"ccw";
	}
	else{
	    cout<<"cw";
	}
	return 0;
}