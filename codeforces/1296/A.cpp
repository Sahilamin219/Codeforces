#include<bits/stdc++.h>
// #define ll long long int
// #define pb push_back
// #define endl "\n"
// #define F first
// #define S second
// #define mp map<ll,ll>
// #define vc vector<ll>
// #define MAX  *max_element
// #define MIN  *min_element
// #define FLUSH fflush(stdout)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
int main(){
    FAST;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <int> v;
		int flag=1;
		int count=0;
		for(int i=0;i<n;i++){
		    int value;
		    cin>>value;
		    v.push_back(value);
		    if(value%2==0){
		        count++;
		        flag=0;
		    }
		}
		int k=0;
		if(count==n){
		    k=1;
		}
		if(k==1){
		    cout<<"NO"<<endl;
		}
		else if((v.size())%2==0){
		    if(flag==1){
		        cout<<"NO"<<endl;  
		    }
		    else{
		        cout<<"YES"<<endl;
		    }
		}
		else if((v.size())%2==1){
		    if(flag==1){
		        cout<<"YES"<<endl;  
		    }
		    else{
		        cout<<"YES"<<endl;
		    }
		}
// 		cout<<(n*m)+c<<endl;
	}
	return 0;
}