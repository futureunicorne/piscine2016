  #include <stdio.h>

int ft_is_prime(int nb) // verifie si c un nombre pair
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
int ft_find_next_prime(int nb)
{
  int i;

  i = 2;
  if(ft_is_prime(nb) == 0)
  {
    return(0);
  }
  nb = nb + 1;
  while(nb)
  {
    while(i < nb)
    {
      if(((nb % i) == 0))
      {
        nb++;
      }
      if((i == (nb -1)))
      {
        return(nb);
      }
      i++;
    }
  }
  return(0);
}

int main(void)
{

  int premier;
  int next;

  premier = 53;
  next = ft_find_next_prime(premier);
  printf("%d\n", next);
  return(0);
}
