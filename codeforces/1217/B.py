import math
t=int(input())
for _ in range(t):
	n,x=map(int,input().split())
	maxi=0
	dif=0
	for _ in range(n):
		d,h=map(int,input().split())
		dif=max(dif,d-h)
		maxi=max(maxi,d)
	if(maxi>=x):
		print(1)
	else:
		if(dif==0):
			print(-1)
		else:
			x-=maxi
			q=(x//dif)
			x=x-(q)*dif
			if(x%dif):
				q+=1
			print(q+1)
		#last mai maxi damage de kr x mai sai subtract kr skat hu <=0 lane k liye to ..
		#x ko x-=maxi sai replace kr diya fir q+1 kr diya aur agar q%dif!=0 hai to q+1 hoga
		#kiyu ki last chance sai phele hi head hozate hai to we are only concerned with dif
		#..that wether is it a divider or not