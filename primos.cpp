#include<cstdio>

int main(void)







isprime(int j)  
{
  for(int j=2;j<=100;j++)
    { 
      int a=0;
      for(int i=1;i<=100;i++)
	{
	  if(j%i==0)
	    a++;
	}
      if(a==2)
	{
	  printf("%d\n",j);
	}
     }
}
