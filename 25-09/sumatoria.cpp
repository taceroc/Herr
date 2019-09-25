#include<cstdio>
#include<math.h>


float sum1(int n);
float partep(int n);
float parten(int n);
float sum3(int n);

int main(void)

{
  for(int n =1; n <=1000; n++)
    { 
      float S1 = sum1(n);
      float S2 = partep(n) - parten(n);
      float S3 = sum3(n);
      float delta1 = fabs((S1 - S3) / S3);
      float delta2 = fabs((S2 - S3) / S3);
      
      std::printf("%10d %10.6e %10.6e %10.6e %10.6e %10.6e \n",n,S1, S2, S3,delta1,delta2);
    }
  
  return 0;
}


float sum1(int N)
{
  float S1 = 0.0;
  float sign = -1.0;
  
  for(int i=1; i<=2*N; i++){
    S1 = S1 + ((sign*i)/(i+1));
    sign = sign *-1;
     }
  return S1;
}

float parten(int N)
{
  float sn2 = 0.0;
    for(int i = 1; i<=N;i++){
      sn2 = sn2 + ((2*i)-1.0)/(2*i);
        }
  return sn2;
}

float partep(int N)
{
  float sp2 = 0.0;
    for(int i = 1; i<=N;i++){
      sp2 = sp2 + ((2*i) /((2 *i) + 1.0));
    }
    return sp2;
}

float sum3(int N)
{
   float S3 = 0.0;
    for(int i = 1; i<=N;i++){
      S3 = S3 + 1.0/((2*i)*((2*i)+1));
    }
  return S3;
}
