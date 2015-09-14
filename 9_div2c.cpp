#include <bits/stdc++.h>
using namespace std ;

long long int ppow(long long int x, long long int y)
{
    long long int r = 1;
    for(long long int i = 1; i <= y; ++i)
    {
        r *= x;
    }
    return r;
}

int main()
{
    long long int n,temp,count1=0 ;
    cin >> n ;
    temp = n ;
    while(temp)
    {
        temp = temp/10 ;
        count1++ ;
    }
    long long int ans1 = ppow(2LL,count1) ;
    //cout << ans1 << "this is ans1" << "\n" ;
    long long int res=0,p,sum1=0,ref1,temp1,s;
    for(long long int i=0;i<=ans1;i++)
    {
        //cout << "entering this in to no of times\n" ;
        ref1 = i ;
        temp1;
        s =0 ;
        sum1 =0 ;
        while(ref1!=0)
        {
            p = ref1&1 ;
            p = p*ppow(10LL,s) ;
            sum1+=p ;
            s++ ;
            ref1 = ref1>>1 ;
        }
        //cout << sum1 << "this is sum1\n" ;
        if(sum1<=n)
        {
            res++ ;
        }
        else
        {
            cout << res-1 ;
            break ;
        }
        //cout << res << "\n" ;
    }
    return 0 ;
}