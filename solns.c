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
  	int i,sum=0;
  	for(i=0;i<n;i++)
  	{ 		
  		sum=sum+a[i];
  	}
  	average=sum/n;
  	return average;
  }
  
  
  
  
  //prime
  int isprime(int i)
  {
  	int flag=0;
  		for(int j=2;j<i;j++)
  		{
  			if(i%j==0)
  			{
  				flag=1;
  				break;
  			}
  		}
  		if(flag==0)
  			return 1;
  		else
  			return 0;
  }
  //factors
  
  int factors(int n,int a[])
  {
  	int count=0;
  	int i=2;
  	while(i<n)
  	{
  		if(n%i==0)
  		  if(isprime(i)==1)
  		  {
  		  	a[count]=i;
  		  	count++;
  		  	n=n/i;
  		  	if((isprime(n))==1)
  		  	{
  		  		a[count++]=n;
  		  		break;
  		  	}
  		  	i=2;
  		 }
  		 else continue;
  		 else
  		 i++;
  	}
  	return count;
  	
  }
 int mode(int a[],int n)
 {
 	int maxValue=0,maxCount=0,i,j;
 	for(i=0;i<n;i++)
 	{
 		int count=0;
 		for(j=0;j<n;j++)
 		{
 			if(a[j]==a[i])
 			count++;
 		}
 		if(count>maxCount)
 		{
 			maxCount=count;
 			maxValue=a[i];
 		}
 	}
 	return maxValue;
 }
