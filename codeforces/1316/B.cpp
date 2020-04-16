#include <iostream>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        string min_stri="";int store_i=0;
        for(int i=0;i<=5000;i++){
            min_stri+='z';
        }
        for(int i=0;i<n;i++){
            string tmp="";int k=i;
            for(int j=0;j<n;j++){
                if(n%2==i%2){
                    if(i+j<n)tmp+=s[(i+j)];
                    else tmp+=s[i+j-n];
                }
                else{
                    if(i+j<n)tmp+=s[i+j];
                    else {
                    	k--;
                        tmp+=s[k];
                    }
                }
            }
            if(min_stri>tmp){
                store_i=i;
                min_stri=tmp;
            }
        }
        cout<<min_stri<<"\n";cout<<store_i+1<<"\n";
    }
	return 0;
}