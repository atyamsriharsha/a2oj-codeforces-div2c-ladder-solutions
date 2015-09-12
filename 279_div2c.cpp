#include <bits/stdc++.h>
using namespace std ;
int main ()
{
	string s;
	long long int length,l;
	cin>>s;
	length=s.length();
	long long int p,a,b,num,rem1[length],rem2[length];
	cin>>a>>b;
	num=0;
	for(long long int i=0;i<length;i++)
	{
		num=((num*10)%a+(s[i]-'0'))%a;
		rem1[i]=num%a;
	}
	p=1;
	num=0;
	bool flag1= 0 ;
	for(long long int i=length-1;i>=0;i--)
	{
		num=(num+(p*(s[i]-'0')%b)%b)%b;
		p=(p*10)%b;
		rem2[i]=num;
	}
	for(long long int i=0;i<length-1;i++)
	{
		if(rem1[i]==0 && rem2[i+1]==0 && s[i+1]!='0')
		{
			cout << "YES\n";
			cout << s.substr(0,i+1) << "\n" ;
			cout << s.substr(i+1,length);
			flag1=1 ;
			break ;
		}
	}
	if(flag1==0)
		cout<<"NO";
	return 0;
}