#include <stdio.h>

int ft_sqrt(int nb) // racine carree est le reel positif ...
{
    int i;

    i = 1;
    if(nb < 0)
    {
      return(0);
    }
    while(i * i < nb)
    {
      i++;
    }
    if((nb % i ) == 0) // utilise le modulo pour verifier si le reste est bien 0
    {
      return(i);
    }
    else
    {
      return(0);
    }
}

int main(void)
{
  int nb;
  int reel;

  nb = 49;
  reel = ft_sqrt(nb);
  printf("%d\n", reel);
  return(0);
}
