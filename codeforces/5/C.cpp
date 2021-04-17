#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;
int dp[1000001] , C[1000001] , D[1000001];
stack<int> stk;

int main()
{
	string st;
	int mx = 0;
	
	cin>>st;
	for(int i=0;i<st.size();i++){
		char ch = st[i];
		
		if(ch == '('){
			stk.push(i);
		}
		else{
			if(stk.empty()){
				C[i] = D[i] = -1;
			}
			else{
				int pos = stk.top();
				stk.pop();
				
				C[i] = D[i] = pos;
				if(pos > 0 && st[pos-1] == ')' && C[pos-1] != -1)
				C[i] = C[pos-1];
				
				dp[i - C[i] + 1]++;
				mx = max(mx , i - C[i] + 1);
			}
		}
	}
	
	dp[0] = 1;
	cout<<mx<<" "<<dp[mx];
}
