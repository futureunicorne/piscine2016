#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;
    int modu;

    temp = *a / *b;
    modu = *a % *b;
    *a = temp;
    *b = modu;
}
int main(void)
{
  int a;
  int b;
  int *c;
  int *d;

  a = 10;
  b = 3;
  c = &a;
  d = &b;

  ft_ultimate_div_mod(c, d);

  printf("%d\n" "%d\n", a, b);
  return(0);
}
