#include <stdio.h>

int ft_fibonacci(int index) // formule qui prend  addition les deux derniers
{                           // pour former le 3 eme ! gg ft_fibonacci ;)
  if(index < 0)
  {
    return(-1);
  }
  if(index == 0 || index == 1)
  {
    return(index);
  }
  else
  {
    return(ft_fibonacci(index -1) + ft_fibonacci(index -2));
  }
}
int main(void)
{
  int index;

  index = 25;
  index = ft_fibonacci(index);
  printf("%d\n", index);
  return(0);
}
