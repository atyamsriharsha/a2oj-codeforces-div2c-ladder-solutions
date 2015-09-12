#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n,temp ;
	cin >> n ;
	std::vector<long long int> v;
	std::vector<long long int> v1;
	long long int ans[100001];
	ans[0]=0 ;
	for(int i=0;i<=100000;i++)
	{
		v1.push_back(0) ;
	}
	for(int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
		v1[temp]+=temp ;
	}
	ans[1]=v1[1];
	for(int i=2;i<=100000;i++)
	{
       ans[i]=max(ans[i-2]+v1[i],ans[i-1]) ;
	}
	cout << ans[100000] ;
	return 0 ;
}