s = raw_input()
a,b = map(int,raw_input().split())
flag1=0
for x in xrange(1,len(str(s))):
	s2=s[x:len(str(s))]
	s1=int(s)-int(s2)
	if int(str(s1)[0])!=0 and int(str(s2)[0])!=0:
		if int(str(s1)[0:x])%a==0:
			if int(s2)%b==0:
			#print s1,s2
				flag1=1
				print "YES"
				print str(s1)[0:x]
				print s2
				break
if flag1==0:
	print "NO"