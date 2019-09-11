#include<cstdio>


int isprime(int j);
int sumprimes(int imax,int imin);


int main(void)
{
  std::printf("sumprimes(%d, %d)= %d\n", 50, 100, sumprimes(50,100));

  return 0;
}


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
	return 1;
     }
  return 0;
}
int sumprimes(int imax, int imin)
{

  int sum =0;
  for(int i=imin; i<=imax; i++)
    {
      if(isprime(i))
	sum=i++;
    }
  return sum;
}
