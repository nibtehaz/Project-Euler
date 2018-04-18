## بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
## رَّبِّ زِدْنِى عِلْمًا 

#Bismillahir Rahmanir Rahim
#Rabbi Zidni Ilma

li=[]
li.append(0)

for i in range(1,10001):
	div=0
	for j in range(1,10001):
		if(j*j>=i):
			break
		if(i%j==0):
			div+=j
			div+=i/j
	if(i%j==0):
		div+=j
	div-=i
	li.append(div)

ans=0

for i in range(1,10001):
	if(li[i]<len(li) and  li[li[i]]==i and li[i]!=i):
		ans+=i
		print i

print ans 


