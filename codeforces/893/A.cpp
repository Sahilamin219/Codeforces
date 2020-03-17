#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int flag=1;
    int spec=3;
    int winr=1;
    int loser=4;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        winr=val;
        if(i==0 && val==3){
            cout<<"NO";
            return 0;
        }
        if(loser==winr){
            flag=0;
            break;
        }
        loser=(6-winr-spec);
        spec=loser;
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	return 0;
}