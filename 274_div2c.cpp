#include <bits/stdc++.h>
using namespace std ;

bool cmp(const pair<long long int,long long int>p1,const pair<long long int,long long int>p2)
{
	if(p1.first!=p2.first)
		return p1.first<p2.first ;
	else
		return p1.second<p2.second ;
}

int main()
{
	long long int n,a,b,ans=0 ;
	cin >> n; 
	std::vector<pair<long long int,long long int> > v;
	for(int i=0;i<n;i++)
	{
		cin >> a >> b ;
		v.push_back(make_pair(a,b)) ;
	}
	sort(v.begin(),v.end(),cmp) ;
	/*for(int i=0;i<n;i++)
	{
		cout << v[i].first<<" " << v[i].second << "\n" ; 
	}*/
	for(int i=0;i<n;i++)
	{
		if(v[i].second>=ans)
			ans=v[i].second ;
		else
			ans=v[i].first ;
	}
	cout << ans << "\n" ;
	return 0 ;
}