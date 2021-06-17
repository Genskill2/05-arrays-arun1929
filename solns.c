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
  
  //factors
  int factors(int n,int a[])
  {
  	int count=0;
  	int i=2;
  	while(i<n)
  	{
  		if(n%i==0)
  		  if(prime(i)==1)
  		  {
  		  	a[count]=i;
  		  	count++;
  		  	n=n/i;
  		  	if(prime(n)==1)
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
  
  
  //mode
  int mode(int a[],int n)
  {
  	int lmax=max(a,n);
  	int lmin=min(a,n);
  	int count[100],b=-1,i,j,cnt=0;
  	for(i=lmin;i<=lmax;i++)
  	{
  		for (j=0;j<n;j++)
  		{
  			if(a[j]==i)
  			 cnt++;
  			 
  		}
  		count[++b]=cnt;
  	}
  	int cmax=0,flag=0;
  	for(int i=0;i<b;i++)
  	{
  		if(count[i]>cmax)
  		{
  			cmax=count[i];
  			flag=i-(0-lmin);
  		}
  		else 
  			continue;
  	}
  	return flag;
  }
  
  //prime
  int prime(int i)
  {
  	int flag=0,j;
  		for(j=2;j<i;j++)
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
