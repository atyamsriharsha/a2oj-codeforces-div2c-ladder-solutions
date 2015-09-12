#include <bits/stdc++.h>
using namespace std ;

int main()
{
	long long n,temp,sum1=0,count1=0,ans=0,sum2=0 ;
	std::vector<int> v;
	cin >> n ;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		sum1+=temp ;
		v.push_back(temp) ;
	}
	if(sum1%3!=0)
	{
		cout << 0 ;
		return 0 ;
	}
	else
	{
		for(long long int i=0;i<n;i++)
		{
			sum2+=v[i];
			if(i<n-1 && sum2==(2*sum1)/3)
			{
				ans+=count1 ;
			}
			if(sum2==sum1/3)
				count1++ ;
		}	
	}
	cout << ans < "\n" ;
	return 0 ;
}