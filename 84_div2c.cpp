#include <bits/stdc++.h>
using namespace std ;

int main()
{
	int n,m,i,j,k ;
	cin >> n;
    m = n + 5;
    for(i = 0;4*i<= n;i++) 
    {
        j = n-4*i;
        if(j%7!= 0) 
        	continue;
        j/= 7;
        if(i+j<=m) 
        {
            m = i+j;
            k = i;
        }
    }
    if(m>=n) 
    {
        cout << -1;
    } 
    else 
    {
        cout << string(k,'4') << string(m-k,'7');
    }
	return 0 ;
}