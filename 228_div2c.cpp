#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n,temp ;
	cin >> n ;
	std::vector<int> v,v1;
	for(int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
		v1.push_back(0) ;
	}
	sort(v.begin(),v.end()) ;
	int ans=0,count1=0;
	while(1)
	{
		count1++ ;
		int h=0 ;
		if(ans>=n)
		{
			cout << count1-1 ;
			return 0;
		}
		for(int i=0;i<n;i++)
		{
			if(v[i]>=h)
			{
				v[i]=-1 ;
				h++ ;
				ans++ ;
			}
		}
	}
	return 0 ;
}