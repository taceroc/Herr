#include<cstdio>


int main(void)

{
  double s = 1.0; double x;

  for(x = 1.0; x < 1e2; x++)
    {
      x = x + 1;
      s = s + (1.0/x);
    }
  std:: printf("%f\n",s);
  return 0;
}
