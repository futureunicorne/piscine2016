#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int temp; // cette variable permet de conserver la valeur de a

  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{
  int nbr;
  int nbr2;
  int *a;
  int *b;

  nbr = 12;
  nbr2 = 37;
  a = &nbr;
  b = &nbr2;

  printf(" nbr = %d " "nbr2 = %d \n", nbr, nbr2);

  ft_swap(a, b);

  printf(" nbr = %d " "nbr2 = %d ", nbr, nbr2);
  return(0);

}
