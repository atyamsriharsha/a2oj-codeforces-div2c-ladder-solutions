#include <bits/stdc++.h>
using namespace std;

bool func(const pair<long long int,long long int>p1,const pair<long long int,long long int>p2)
{
	return (abs(p1.first)+abs(p1.second))<(abs(p2.first)+abs(p2.second)) ;
}

int main()
{
	long long int n ;
	cin >> n ;
	pair<long long int,long long int> p[n] ;
	for(long long int i=0;i<n;i++)
	{
		cin >> p[i].first >> p[i].second ;
	}
	sort(p,p+n,func);
	/*for(long long int i=0;i<n;i++)
	{
		cout << p[i].first << " " << p[i].second << "\n" ;
	}*/
	long long int posx=0,posy=0,count1=0 ;
	bool flag1=0,flag2=0,flag3=0,flag4=0 ;
	for(long long int i=0;i<n;i++)
	{
		flag1=0;
		flag2=0 ;
		flag3=0 ;
		flag4=0 ;
		if(posx>p[i].first)
		{
			//cout << "1 " << posx-p[i].first << " L\n" ;
			flag1 = 1 ;
			count1++ ;
		}
		else if(posx<p[i].first)
		{
			//cout << "1 " << p[i].first-posx << " R\n" ;
			flag2=1 ;
			count1++ ;

		}
		if(posy>p[i].second)
		{
			//cout << "1 " << posy-p[i].second << " D\n" ;
			flag3 = 1 ;
			count1++ ;
		}
		else if(posy<p[i].second)
		{
			//cout << "1 " << p[i].second-posy << " U\n" ;
			flag4 = 1 ;
			count1++ ;
		}
		//cout << 2 << "\n" ;
		if(flag1==1)
		{
			//cout << "1 " << abs(p[i].first-posx) << " R\n" ;
			count1++ ;
		}
		else if(flag2==1)
		{
			//cout << "1 " << abs(posx-p[i].first) << " L\n" ;
			count1++ ;	
		}
		if(flag3==1)
		{
			//cout << "1 " << abs(p[i].second-posy) << " U\n" ;
			count1++ ;
		}
		else if(flag4==1)
		{
			//cout << "1 " << abs(posy-p[i].second) << " D\n" ;
			count1++ ;
		}
		//cout << 3 << "\n" ;
		count1+=2 ;
	}
	cout << count1 << "\n" ;
	for(long long int i=0;i<n;i++)
	{
		flag1=0;
		flag2=0 ;
		flag3=0 ;
		flag4=0 ;
		if(posx>p[i].first)
		{
			cout << "1 " << posx-p[i].first << " L\n" ;
			flag1 = 1 ;
		}
		else if(posx<p[i].first)
		{
			cout << "1 " << p[i].first-posx << " R\n" ;
			flag2=1 ;
		}
		if(posy>p[i].second)
		{
			cout << "1 " << posy-p[i].second << " D\n" ;
			flag3 = 1 ;
		}
		else if(posy<p[i].second)
		{
			cout << "1 " << p[i].second-posy << " U\n" ;
			flag4 = 1 ;
		}
		cout << 2 << "\n" ;
		if(flag1==1)
		{
			cout << "1 " << abs(p[i].first-posx) << " R\n" ;
		}
		else if(flag2==1)
		{
			cout << "1 " << abs(posx-p[i].first) << " L\n" ;	
		}
		if(flag3==1)
		{
			cout << "1 " << abs(p[i].second-posy) << " U\n" ;
		}
		else if(flag4==1)
		{
			cout << "1 " << abs(posy-p[i].second) << " D\n" ;
		}
		cout << 3 << "\n" ;
	}
	return 0 ;
}