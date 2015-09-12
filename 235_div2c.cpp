#include <bits/stdc++.h>
using namespace std ;

int main()
{
	int n,m ;
	cin >> n >> m ;
	if(n>m+1)
	{
		cout << -1 ;
		return 0 ;
	}
	if(m>2*(n+1))
	{
		cout << -1 ;
		return 0 ;
	}
	int z=0 ;
	if(m>2*n)
	{
 		z=m-2*n ;
 		m=2*n ;
	}
	if(n==m+1)
	{
		cout << "0" ;
		n=m ;
	}
	int ex=m-n ;
	for(int i=0;i<ex;i++)
	{
		cout << "110" ;
	}
	for(int i=ex;i<n;i++)
	{
		cout << "10" ;
	} 
	cout << string(z,'1') ;
	return 0 ;
}