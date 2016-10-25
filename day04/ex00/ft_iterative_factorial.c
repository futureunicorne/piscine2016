#include <stdio.h>

int ft_iterative_factorial(int nb)
{
  int resultat;
  int i;

  i = 1;
  resultat = 1;
  if(nb <= 0 || nb >= 12)
  {
    printf("entrer un nombre inferieur a 12\n");
    return(0);
  }
  while(i <= nb)
  {
    resultat = resultat * i;
    i++;
  }
  return(resultat);
}

int main(void)
{
  int nb;

  nb = 8;
  nb = ft_iterative_factorial(nb);
  printf("%d\n", nb);
  return(0);
}
