n=int(input())
k=1
while((k*n)%360!=0):
  k+=1
print(k)
#We can now regard Takahashi’s move as movingXdegrees on the circle,
#so the answer is the minimumksuch thatkXis a multiple of 360