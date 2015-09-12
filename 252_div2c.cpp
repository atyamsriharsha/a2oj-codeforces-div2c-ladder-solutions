#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n,m,k ;
	cin >> n >> m >> k ;
	int a[n][m] ;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j]=0 ;
		}
	}
	/*if(k==n)
	{
		for(int i=0;i<n;i++)
		{
			cout << m << " ";
			for(int j=0;j<m;j++)
			{
				cout << i << " " << j << " " ;
			}
			cout << "\n" ;
		}
	}
	else if(k==m)
	{
		for(int i=0;i<m;i++)
		{
			cout << n << " " ;
			for(int j=0;j<n;j++)
			{
				cout << i << " " << j << " " ;
			}
			cout << "\n" ;
		}
	}
	else
	{
		

	}*/
	int x,y ;
	x=1,y=1 ;
	int flag1=0,count1=0,sum1=0 ;
	if(k==1)
	{
		cout << m*n << " ";
      for(int i = 1; i <= n; ++i)
      {
      	/* code */
      	if(i%2==1)
      	for(int j = 1; j <= m; ++j)
      	{
      		/* code */
      		cout << i << " " << j << " " ;
      	}
      	else
      	{
      		for (int j=m;j>0;j--)
      		{
      			/* code */
      			cout << i << " "<<j << " " ;
      		}
      	}
      }
      cout << "\n" ;
      return 0 ;
	}
	else
	for(int i=0;i<k-1;i++)
	{
		sum1+=count1 ;
		count1=0 ;
		cout << 2 << " " ;
		while(count1<2)
		{
			count1++ ;
			if(x%2==1 && y!=m)
			{
            	cout << x << " " << y << " " ;
            	y++ ;
			}
			else if(x%2==1 && y==m)
			{
				cout << x << " " << y << " " ;
				x++ ;
			}
			else if(x%2==0 && y==m)
			{
				cout << x << " " << y << " " ;
            	y-- ;
			}
			else if(x%2==0 && y==1)
			{
				cout << x << " " << y << " " ;
				x++ ;
			}
			else if(x%2==0 && y!=1 && y!=m)
			{
				cout << x << " " << y << " " ;
				y-- ;
			}
		} 
		cout << "\n" ;
	}
	//cout << m*n-sum1-2 ;
	cout << m*n-sum1-2 << " " ;
	for(int i=m*n-sum1-2;i>0;i--)
	{
		//cout << x << " " << y << " \n" ;
		//cout << "yo\n" ;
		if(x%2==1 && y!=m)
		{
            cout << x << " " << y << " " ;
            y++ ;
		}
		else if(x%2==1 && y==m)
		{
			cout << x << " " << y << " " ;
			x++ ;
		}
		else if(x%2==0 && y==m)
		{
			cout << x << " " << y << " " ;
            y-- ;
		}
		else if(x%2==0 && y==1)
		{
			cout << x << " " << y << " " ;
			x++ ;
		}
		else if(x%2==0 && y!=1 && y!=m)
		{
			cout << x << " " << y << " " ;
			y-- ;
		}
	}
	cout << "\n" ;

	return 0 ;
}