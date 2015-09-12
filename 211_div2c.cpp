#include <bits/stdc++.h>
using namespace std ;
const int N=200000+1000;
char A[N],B[N],C[N];
int main()
{
	cin >> A ;
	int len=strlen(A);
	int i;
	int Cnt=0;
	B[Cnt++]=A[0];
	B[Cnt++]=A[1];
	for(i=2;i<len;i++)
	{
		if(B[Cnt-1]==B[Cnt-2]&&A[i]==B[Cnt-1])continue;
		B[Cnt++]=A[i];
	}
	B[Cnt]='\0';
	len=strlen(B);
	Cnt=0;
	C[Cnt++]=B[0];
	C[Cnt++]=B[1];
	C[Cnt++]=B[2];
	for(i=3;i<len;i++)
	{
		if(B[i]==C[Cnt-1]&&C[Cnt-2]==C[Cnt-3])continue;
		C[Cnt++]=B[i];
	}
	C[Cnt]='\0';
	cout << C ;	
	return 0;
}
/*int main()
{
	string s ;
	cin >> s ;
	std::vector<char> v;
	//cout << sizeof(v) ;
	int length = s.size() ;
	int p=0 ;
	//cout << length ;
	//bool rem[length] ;
	//memset(rem,0,sizeof(rem)) ;
	v.push_back(s[0]) ;
	v.push_back(s[1]) ;
	p=2 ;
	for(int i=0;i<length;i++)
	{
		if(p-2>0 && p-3>=0) 
		{
			if(v[p-2]==v[p-3])
			{
				if(p-1>=0)
				{
					if(v[p-1]!=s[i])
					{
						v.push_back(s[i]) ;
						p++ ;
					}
				}
			}
		}
		else if(p-2<=0)
		{
			if(v[0]!=v[1])
				v.push_back(s[i]) ;
			p=p+1 ;
		}
		else if(p-2>0)
		{
		   	if(v[0]!=v[1])
		   	{
		   		if(v[1]!=v[2])
		   		{
		   			v.push_back(s[i]) ;
		   			p=p+1 ;
		   		}
		   	}
		   	else if(v[0]==v[1])
		   	{
		   		if(v[1])
		   	}
		}
	}
	cout << p ;
	cout << v.size() << "\n" ;
	for(int i=0;i<v.size();i++)
	{
		cout << v[i] ;
	}
	/*for(int i=0;i<length;i++)
	{
		cout << rem[i] ;
	}*/
	//cout << "\n" ;
	/*int i ;
	for(int p=0;p<length;p++)
	{
        i = p ;
		if(s[i]==s[i+1] && i+1<length)
		{
			if(s[i+1]==s[i+2] && i+1<length && i+2 <length && rem[i+1]==0 && rem[i+2]==0)
			{
               rem[i]=1 ;
			}
			else if(s[i+2]==s[i+3] && i+2 < length && i+3 < length && rem[i+2]==0 && rem[i+3]==0)
			{
               rem[i+3]=1 ;
               p=p+2 ;
			}
		}
	}*/
	/*
	for(int i=0;i<length;i++)
	{
		cout << rem[i] ;
	}
	cout << "\n" ;
	*/
	/*for(int i=0;i<length;i++)
	{
		if(rem[i]==0)
		{
			cout << s[i] ;
		}
	}*/
		/*
	cout << "\n" ;
	return 0 ;
}*/