#include <bits/stdc++.h>
using namespace std ;

int main()
{
	string str;
  	cin>>str;
  	int w;
  	cin>>w;
  	int weights[10] = {0};
  	int tw = 0;
  	int j;
  	for(int i=0;i<str.size();i++)
  	{  
    	if(str[i] == '1')
    	{
      		weights[tw] = i+1;
     		tw++;
    	}
  	}  
  	bool fres = false;
  	for(int initialWeight=0;initialWeight<tw;initialWeight++)
  	{
    	bool turn = false; //left
    	bool ok = false;
    	vector<int> res;
    	res.reserve(1000);
    	int total = 0;
    	int left = 0;
    	int right = 0;
    	int lastLW;
    	int lastRW;
    	if(weights[initialWeight] != 0)
    	{
      		res.push_back(weights[initialWeight]);
      		total++;
      		left += weights[initialWeight];
      		lastLW = weights[initialWeight]; 
    	}
    	else 
    		ok = true;
    	while(!ok)
    	{
      		if(!turn)
      		{
				for(int i=0;i<tw;i++)
				{
	  				if((right+weights[i]) > left && (weights[i]!=lastLW))
	  				{
	    				right += weights[i];
	    				lastRW = weights[i];
	    				res.push_back(weights[i]);
	    				total++;
	    				turn = true;
	    				break;
	  				}
				}
				if(!turn)
				{
	  				ok = true;
				}
      		}
      		else
      		{
				for(int i=0;i<tw;i++)
				{
	  				if((left+weights[i]) > right && (weights[i]!=lastRW))
	  				{
	    				left += weights[i];
	    				lastLW = weights[i];
	    				res.push_back(weights[i]);
	    				total++;
	    				turn = false;
	    				break;
	  				}
				}
				if(turn)
				{
	  				ok = true;
				}
      		}
      		if(total == w) 
      			break;
    	}
    	if(total != w)
    	{
      		continue;
    	}
    	else
    	{
      		cout<<"YES"<<endl;
      		for(int i=0;i<res.size();i++) 
      			cout<<res[i]<<" ";
      		cout<<endl;
      		fres = true;
      		break;
      	}
  	}  
  	if(!fres)
   		cout<<"NO"<<endl;
  	return 0;
}