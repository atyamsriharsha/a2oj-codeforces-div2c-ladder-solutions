#include <bits/stdc++.h>
using namespace std ;

int n;
int x[102], y[102], f[102];

int getfather(int k) 
{
    if (f[k] == k)
        return k;
    f[k] = getfather(f[k]);
    return f[k];
}

int u(int a, int b) 
{
    int fa, fb;
    fa = getfather(a);
    fb = getfather(b);
    if (fa!= fb)
        f[fa] = fb;
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    for(int i = 1; i <= n; i++)
        f[i] = i;
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(x[i] == x[j] || y[i] == y[j])
                u(i, j);
    int ans = 0;
    for(int i = 1; i <= n; i++)
        f[i] = getfather(i);
    for(int i = 1; i <= n; i++)
        if(f[i]==i)
            ans++;
    cout << ans-1 << endl;
    return 0;
}