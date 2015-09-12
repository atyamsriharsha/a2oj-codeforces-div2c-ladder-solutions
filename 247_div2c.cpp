#include <bits/stdc++.h>
using namespace std ;
int f[220][220];
const int MOD=1000000007;
int main()
{
    int n,k,d;
    cin >> n >> k >> d ;
    f[0][0]=1;
    for(int i=0;i<=n;++i)
        for(int j=0;j<=k;++j)
            for(int l=1;l<=k;++l)
            {
                int mx=max(j,l);
                f[i+l][mx]=(f[i+l][mx]+f[i][j])%MOD;
            }
    int ans=0;
    for (int i=d;i<=k;++i)
        ans=(ans+f[n][i])%MOD;
    cout << ans << "\n" ;
}