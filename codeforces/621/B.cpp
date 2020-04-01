#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,a,b;
	scanf("%d",&n);
	
	int P[1001] = {0};
	int Q[1001] = {0};
	int R[2001]=  {0};
	int t = 0;

	while(n--){
		scanf("%d %d",&a,&b);
		if(a==b){
			t++;
		}
		else if(a>b){
			P[a-b]++;
		}
		else{
			Q[b-a]++;
		}
		R[a+b]++;
	}

	long long int answer = 0;

	for(int i=1;i<=1000;i++){
		if(P[i]>=2)
			answer += P[i]*(P[i]-1)/2;
		if(Q[i]>=2)
			answer += Q[i]*(Q[i]-1)/2;
	}
	
	for(int i=1;i<=2000;i++){
	    if(R[i]>=2){
	        answer += R[i]*(R[i]-1)/2;
	    }
	}

	if(t>=2){
		answer += t*(t-1)/2;
	}

	printf("%lld\n",answer);

	return 0;
}