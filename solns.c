/* Enter your solutions in this file */
#include <stdio.h>
 int max(int m[],int n)
  {
  	int max=0;
  	for(int i=0;i<n;i++)
  	{
  		if(m[i]>max)
  			max=m[i];
  		else 
  			continue;
  	}
  	return max;
  }
 
