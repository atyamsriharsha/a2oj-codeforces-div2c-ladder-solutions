#include <bits/stdc++.h>
using namespace std ;
int N,P;
string S;
int main()
{
    cin >> N >> P;
    cin >> S;
    int c = (N+1)/2;
    if(P > c) P = N%2 ? c - (P-c) : c - (P-c-1);
    P--;
    int a = 0, b = N-1, l = 100005, r = -1;
    long long int ans = 0;
    while(a < b)
    {
        int req = min(abs(S[a]-S[b]), 26 - abs(S[a]-S[b]));
        if(req) l = min(l,a), r = max(r,a);
        ans += req;
        a++, b--;
    }
    if(l>r)
    {
        cout << "0";
        return 0;
    }
    if(P > r)
    {
        cout << ans + P-l;
        return 0;
    }
    else if(P < l)
    {
        cout << ans + r-P;
        return 0;
    }
    else
    {
        int best = min(P-l+r-l,r-P+r-l);
        cout << ans + best;
        return 0;
    }
}
/*int main()
{
	int n,p,count1=0 ;
	cin >> n >> p ;
	string s ;
	cin >> s ;
	//cout << s ;
	int min1=-1,max1=p-1 ;
	for(int i=0;i<n/2;i++)
	{
		//cout << s[i] << " " << s[n-1-i] << " \n" ;
		if(s[i]!=s[n-1-i])
		{
			//cout << "entered\n" ;
			if(i<p-1)
				min1 =i ;
			if(i>p-1)
				max1=i ;
            min1=min(min1,p-1) ;
            max1=max(max1,p-1) ;
            //cout << min1 << " " << max1 << " \n" ;
		}
	}
	for(int z=min1;z<=max1;z++)
	{
		if(s[z]!=s[n-z-1])
		{
			count1+=min(abs(s[z]-s[n-z-1]),abs(26-abs(s[z]-s[n-z-1]))) ;
		}
	}
	//cout << count1 << "\n" ;
	//cout << min1 << " " << max1 << " \n" ;
	if((p-1)!=max1 && min1!=-1)
	{
		//cout << "fcuk1\n" ;
		cout << count1+2*(min(max1-p+1,p-min1-1))+max(max1-p+1,p-min1-1) << "\n";
	}
	else if((p-1)==max1 && min1!=-1)
	{
		//cout << "fcuk2\n" ;
        cout << count1+p-min1-1 << "\n" ;
	}
	else if((p-1)!=max1 && min1==-1)
	{
		//cout << "fcuk3\n" ;
		cout << count1 +max1-p+1 << "\n" ;
	}
	else
	{
		//cout << "fcuk4\n" ;
		cout << count1 << "\n" ;
	}
	return 0 ;
}*/