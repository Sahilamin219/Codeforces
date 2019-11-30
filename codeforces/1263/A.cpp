    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    	int t;
    	cin>>t;
    	while(t--){
    		int ar[3];
    		cin>>ar[0]>>ar[1]>>ar[2];
    		sort(ar,ar+3);
    		if(ar[1]==ar[2]){
    			int sum=0;
    			int x=ar[0]/2;
    			sum+=x*2;
    			ar[1]-=x;
    			ar[2]-=x;
    			sum+=ar[1];
    			cout<<sum<<endl;
    		}else{
    			int x=ar[2]-ar[1];
    			if(x>ar[0]){
    				cout<<ar[1]+ar[0]<<endl;
    			}else{
    				int sum=x;
    				ar[0]-=x;
    				ar[2]-=x;
    				int d=ar[0]/2;
    				sum+=d*2;
    				ar[1]-=d;
    				ar[2]-=d;
    				sum+=ar[1];
    				cout<<sum<<endl;
    			}
    		}
    	}
    	return 0;
    }