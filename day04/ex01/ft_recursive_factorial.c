#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
  if((nb <= 0) || (nb >= 12))
  {
    return(0);
  }
    if (nb == 1)
  {
    return (1);
  }
  return (nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
  int nb;

  nb = 6;
  nb = ft_recursive_factorial(nb);
  printf("%d", nb);
  return(0);
}
