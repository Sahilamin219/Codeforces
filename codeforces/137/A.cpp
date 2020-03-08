#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    cin>>str;
    int ans=0;
    int i=0;
    while(i<str.size()){
        int k=0;
        while(k<5){
            k++;
            if(str[i]==str[i+1]){
                i++;
                if(k==5){
                    ans++;
                }
            }
            else{
                ans++;
                i++;
                break;
            }
        }
    }
    cout<<ans<<endl;
	return 0;
}