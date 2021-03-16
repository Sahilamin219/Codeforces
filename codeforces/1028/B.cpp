#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
	int len = 400;
	cout << string(len, '5') << "\n";
	cout << (string(len - 1, '4') + '5') << "\n";
}
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int test=1;//cin>>test;
	while(test--)solve();
	return 0;
}