#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    while(a!=b){
        a=(a+1)/2;
        b=(b+1)/2;
        ans++;
    }
    if(ans==log2(n)){
        cout<<"Final!";
    }
    else{
        cout<<ans;
    }
	return 0;
}