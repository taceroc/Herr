#include<cstdio>

int isprime(int j);
int sumprimes(int imin, int imax);

int main(void)
{
  std::printf("isprime(%d)=%d\n",7,isprime(7));
  std::printf("sumprimes(%d, %d) = %d\n",50, 100, sumprimes(50,100));
  return 0;
}

int isprime(int j)
{
  int a=0;
  for(int i=2;i<j;i++)
    {
      if(j%i==0)
	a++;
    }
    if(a==0) return 1;
   return 0;
}

int sumprimes(int imin, int imax)
{
  int sum=0;
  for(int i=imin; i<= imax; i++)
    {
      if(isprime(i))
	sum+=i;
    }
  return sum;
}
