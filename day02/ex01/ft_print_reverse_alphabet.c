#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
  char *str;
  int i;

  str = "abcdefghijklmnopqrstuvwxyz";

  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  while( i >= 0)
  {
    ft_putchar(str[i]);
    i--;
  }
  ft_putchar('\n');
}

int main()
{
  ft_print_reverse_alphabet();
  return(0);
}
