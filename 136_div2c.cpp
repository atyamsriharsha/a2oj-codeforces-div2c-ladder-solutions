#include <bits/stdc++.h>
using namespace std ;

int main()
{
	long long int n,temp ;
	cin >> n ;
	std::vector<long long int> v,v1;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
		v1.push_back(temp) ;
	}	
	sort(v1.begin(),v1.end()) ;
	long long int count1 =0 ;
	bool flag1=0 ;
	for(int i=0;i<n;i++)
	{
		if(v[i]!=v1[i])
		{
			count1++ ;
			if(count1>2)
			{
				flag1=1 ;
				break ;
			}
		}
	}
	if(flag1==1)
	{
		cout << "NO" ;
	}
	else
	{
		cout << "YES" ;
	}

	return 0 ;
}