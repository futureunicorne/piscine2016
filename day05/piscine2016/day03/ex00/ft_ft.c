#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
  int nbr1;
  int *nbr;

  nbr1 = 10;
  nbr = &nbr1;
  printf("avant %d\n", nbr1);

  ft_ft(nbr);

  printf("apres %d\n", nbr1);
  return(0);
}
