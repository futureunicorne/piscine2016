#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
  int i;
  int nb_origine; // permet de conserver la valeur d origine de la puissance

  i = 1;
  nb_origine = nb;
  if(power < 0)
  {
    return(0);
  }
  if(power == 0)
  {
    return(0);
  }
  while(i < power)
  {
    nb = nb * nb_origine;
    i++;
  }
  return(nb);
}
int main(void)
{
  int nb;
  int power;

  nb = 2;
  power = 8;
  nb = ft_iterative_power(nb, power);
  printf("%d\n", nb);
  return(0);

}
