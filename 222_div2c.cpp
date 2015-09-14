#include <bits/stdc++.h>
using namespace std ;

const int dx[] = { 0, -1, 0, 1 };
const int dy[] = { 1, 0, -1, 0 };
string s[505];
int n, m, k, cnt, emp;

bool ok(const int& x, const int& y) 
{
  return 0 <= x && x < n && 0 <= y && y < m;
}

void dfs(const int& cx, const int& cy) 
{
  	if(cnt >= emp-k) 
  		return;
  	s[cx][cy] = '.';
  	++cnt;
  	for(int i=0;i<4; ++i) 
  	{
    	int nx = cx + dx[i];
    	int ny = cy + dy[i];
    	if(ok(nx, ny) && s[nx][ny] == 'X')
    	{ 
    		dfs(nx, ny);
    	}
  	}
}

int main() 
{ 
  	cin >> n >> m >> k;
  	for(int i=0; i<n; ++i)
  	{
    	cin >> s[i];
	}
  	int f = 1;
  	for(int i=0; i<n; ++i)
  	{
    	for(int j=0;j<m; ++j)
    	{
      		if(s[i][j] == '.') 	
      		{
        		s[i][j] = 'X';
        		++emp;
      		}
      	}
    }
  	for(int i = 0; i < n && f; ++i)
  	{
    	for(int j = 0; j < m && f; ++j)
    	{	
      		if(s[i][j] == 'X') 
      		{
        		f = 0;
        		dfs(i, j);
      		}
      	}
    }
  	for(int i = 0; i < n; ++i)
  	{
    	cout << s[i] << '\n';
  	}
}