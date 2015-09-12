#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int m,s1,s2 ;
	cin >> m >> s1 ;
	s2=s1 ;
	std::vector<int> v1,v2;
	for(int i=0;i<m;i++)
	{
		v1.push_back(0) ;
		v2.push_back(0) ;
	}
	if(s1==0)
	{
		if(m==1)
			cout << "0 0" ;
		else
			cout << "-1 " << -1 ;
		return 0 ;
	}
	else if(m*9<s1)
	{
		cout << "-1 -1" ;
		return 0;
	}
	else
	{
		v1[m-1]=1 ;
		int count1=s1-1 ;
		for(int i=0;count1!=0 ,i<m;i++)
		{
           while(count1!=0 && v1[i]<9)
           {
           	count1-- ;
           	v1[i]++ ;
           }
		}
		for(int i=m-1;i>=0;i--)
		{
			cout << v1[i]  ;
		}
		cout << " " ;
		v2[0]=1 ;
		count1=s2-1 ;
		for(int i=0;count1!=0,i<m;i++)
		{
           while(count1!=0 && v2[i]<9)
           {
           	count1-- ;
           	v2[i]++ ;
           }
		}
	}
	for(int i=0;i<m;i++)
	{
		cout << v2[i]  ;
	}
	//cout << " " ;
	
	return 0 ;
}