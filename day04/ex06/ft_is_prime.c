#include <stdio.h>

int ft_is_prime(int nb)
{
  int i;

  i = 2; // init a 2 pour pas prendre en compte 1 et nb;
  if(nb <= 0)
  {
    return(0);
  }
  if(nb == 1)
  {
    return(1);
  }
  while(i < nb)  // pas prendre en compte 1 et nb
  {
    if(((nb % i) == 0)) //verifie si il ya un reste dc si sa donne un entier
    {
      return(0);
    }
    i++;
  }
  return(1);
}
int main(void)
{
  int nb;
  int premier;

  nb = 12;
  premier = ft_is_prime(nb);
  printf("%d\n", premier);
  return(0);
}
