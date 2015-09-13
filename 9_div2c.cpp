#include <bits/stdc++.h>
using namespace std ;

int main()
{
	double eps = 1e-9 ;
	int n,temp,count1=0 ;
	cin >> n ;
	temp = n ;
	while(temp)
	{
		temp = temp/10 ;
		count1++ ;
	}
	int ans1 = int(pow(2,count1)+eps) ;
	//if(n==99)
		//cout << ans1 ;
	//cout << ans1 << "this is ans1" << "\n" ;
	int res=0,p,sum1=0,ref1,temp1,s,ans2;
	for(int i=1;i<=ans1;i++)
	{
		//cout << "entering this in to no of times\n" ;
		ref1 = i ;
		temp1;
		s =0 ;
		sum1 =0 ;
		while(ref1>0)
		{
            p = ref1&1 ;
            ans2 = p*pow(10,s) ;
            sum1+=ans2 ;
            s++ ;
			ref1 = ref1>>1 ;
		}
		//if(n==99)
		//cout << sum1 << "this is sum1\n" ;
        if(sum1<=n)
        {
        	res++ ;
        }
        else
        {
        	break ;
        }
        //if(n==99)
        //cout << res << "\n" ;
	}
	cout << res << "\n" ;
	return 0 ;
}