import math
n,m=map(int,raw_input().split())
list1=[]
for x in xrange(0,n+1):
	for j in xrange(x+1,m+1):
		list1.append((x,j))
count1=0
for line in list1:
	for line1 in list1:
		print line[0],line[1]
		print line1[0],line1[1]
		print float(math.sqrt(pow(line[0]-line1[0],2)+pow(line[1]-line1[1],2))),int(math.sqrt(pow(line[0]-line1[0],2)+pow(line[1]-line1[1],2)))
		if float(math.sqrt(pow(line[0]-line1[0],2)+pow(line[1]-line1[1],2)))!=int(math.sqrt(pow(line[0]-line1[0],2)+pow(line[1]-line1[1],2))):
			print "hello"
			count1=count1+1
print count1/2
