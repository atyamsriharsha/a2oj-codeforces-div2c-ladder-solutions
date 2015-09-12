#include <bits/stdc++.h>
using namespace std ;
#define MAXM 1000
char g[2][MAXM];

int main()
{
  int n, m, temp;
  cin >> n >> m ;
  g[1][0] = 1;
  int ans ;
  for(int i = 0; i < n; i++)
  {
    ans = i&1;
    cin >> temp ;
    for(int j = m - 1; j >= 0; j--)
    {
      if(g[!ans][j])
      {
        g[ans][j] = 1;
        if((j + temp) % m == 0)
        {
          cout << "YES" ;
          return 0;
        }
        else
        {
          g[ans][(j + temp) % m] = 1;
        }
      }
    }
  }
  cout << "NO" ;
  return 0;
}