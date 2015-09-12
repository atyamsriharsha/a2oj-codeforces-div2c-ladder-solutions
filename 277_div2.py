n,p=map(int,raw_input().split())
#print n,p
s=raw_input()
#print s
for x in xrange(1,len(str(s))/2+1):
	if s[x]!=s[len(str(s))-x-1]:
		