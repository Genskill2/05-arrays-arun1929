/* Enter your solutions in this file */
#include <stdio.h>
//max
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
 
 //min
 int min(int m[],int n)
  {
  	int min=m[0];
  	for(int i=0;i<n;i++)
  	{
  		if(m[i]<min)
  			min=m[i];
  		else 
  			continue;
  	}
  	return min;
  }
  
  //average
   float average(int a[],int n)
  {
  	float average=0;
  	int i;
  	for(i=0;i<n;i++)
  	{
  		if(a[i]/2==0)
  			average=a[i];
  		else 
  			continue;
  	}
  	return average;
  }
