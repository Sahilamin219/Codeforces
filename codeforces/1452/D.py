t=1;
for _ in range(t):
	n=int(input())
	modo = 998244353;
	k1,k2 = 1,1
	for i in range(n-2):
		tmp=k2
		k2=k1+k2
		k1=tmp
	ans=k2
	explanation = "as k2 store current ans , we use k1 as a storing element"
	s=pow(2, modo-2, modo)
	ans = (ans*pow(s, n ,modo))%modo
	print(ans)