#include <bits/stdc++.h>
using namespace std ;
set<pair<int,int> >s;
int main()
{
	int m,n,count1=0 ;
	cin >> n >> m ;
	if(n<m)
    {
        printf("%d\n",n+1);
        for(int i=0; i<=n; i++)
           printf("%d %d\n",i,n-i);
    }
    else
    {
        printf("%d\n",m+1);
        for(int i=0; i<=m; i++)
           printf("%d %d\n",i,m-i);
    }
	return 0;
}