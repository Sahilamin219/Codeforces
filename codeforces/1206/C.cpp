#include <iostream>
using namespace std;

int main() {
// 	cout<<"GfG!";
    int n;cin>>n;
    if(n%2==0){cout<<"NO\n";}
    else{
        cout<<"YES\n";
        for(int i=1;i<=2*n;i++){
            if(i<=n)cout<<(2*i-(i%2))<<" ";
            else{cout<<(2*(i-n)-(i%2))<<" ";}
        }
    }
	return 0;
}