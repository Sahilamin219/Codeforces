#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector <int> v;
	    for(int i=0;i<n;i++){
	        int val;
	        cin>>val;
	        v.push_back(val);
	    }
	    int si=0,ei=0;
	    int ans=-1;
	    if(v[n-1]%2==0){
	        ans=1;
	        si=n-1;
	    }
	    else{
    	    for(int i=0;i<n;i++){
    	        for(int j=0;j<n-1;j++){
    	            if(v[j]%2==0){
    	                ans=1;
    	                si=j;
    	            }
    	            else if((v[j]+v[j+1])%2==0){
    	                ans=2;
    	                si=j;
    	                ei=j+1;
    	                break;
    	            }
    	        }
    	    }
	    }
	    if(ans==-1){
	        cout<<ans<<endl;
	    }
	    else if(ans==1){
	        cout<<ans<<endl;
	        cout<<si+1<<endl;
	    }
	    else{
	        cout<<ans<<endl;
	        cout<<si+1<<" "<<ei+1<<endl;
	    }
	}
	return 0;
}