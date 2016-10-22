#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  int long nb1;

  nb1 = nb;
  if(nb1 < 0)
  {
    ft_putchar('-');
    nb1 = nb1 * (-1);
  }
  if(nb1 >= 0 && nb1 <= 9)
  {
    ft_putchar(nb1 + 48);
  }
  if(nb1 > 9)
  {
    ft_putnbr(nb1 / 10);
    ft_putchar((nb1 % 10) + 48);
  }
}

int main(void)
{
  int nbr;

  nbr = 41569;
  ft_putnbr(nbr);
  return(0);
}
