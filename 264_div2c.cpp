#include <bits/stdc++.h>
using namespace std ;
int a[2222][2222];
long long int x[2222][2222],y[2222][2222];

int main() 
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) 
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) 
        {
            x[i][j] = x[i - 1][j - 1] + a[i][j];
            y[i][j] = y[i - 1][j + 1] + a[i][j];
        }
    }
    for(int i = n - 1; i >= 1; i--) 
    {
        for(int j = 2; j <= n; j++) 
        {
            y[i][j] = y[i + 1][j - 1];
        }
        for(int j = 1; j <= n - 1; j++) 
        {
            x[i][j] = x[i + 1][j + 1];
        }
    }
    long long int odd = -1;
    pair<int,int> od;
    long long int even = -1;
    pair<int,int> ev;
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= n; j++) 
        {
            long long int val = x[i][j] + y[i][j] - a[i][j];
            if((i + j) % 2 == 0) 
            {
                if(even < val) 
                {
                    even = val;
                    ev = make_pair(i,j);
                }
            } 
            else 
            {
                if(odd < val) 
                {
                    odd = val;
                    od = make_pair(i,j);
                }
            }
        }
    }
    cout << even + odd << endl;
    cout << ev.first << " " << ev.second << " " << od.first << " " << od.second << endl;
    return 0;
}