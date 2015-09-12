#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n,ans1=0,i;
	long long int x ;
	cin >> n >> x ;
	for(i=1;i<=n;)
	{
		if(x%i==0 && (x/i)<=n && x!=0)
		{
			ans1++ ;
		}
		i = i+1 ;
	}
	cout << ans1 ;
	return 0 ;
}