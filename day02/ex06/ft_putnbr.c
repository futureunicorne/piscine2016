#include <unistd.h>

void ft_putchar(char c)
{
   write(1, &c, 1);
}

void ft_putnbr(int nb) // utilisation de la recursivite
{
  int long nc;

  nc = nb;
  if (nc < 0)
  {
    ft_putchar('-');
    nc = (nc * -1);
  }
  if (nc >= 10)
  {
    ft_putnbr(nc / 10);
    ft_putchar((nc % 10) + 48);
  }
  else if( nc >= 0 && nc <= 10)
  {
    ft_putchar(nc + 48);
  }
}
int main()
{

  ft_putnbr(42);
  return(0);
}
