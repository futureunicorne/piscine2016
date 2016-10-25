#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_numbers(void)
{
  char *str;
  int i;

  str = "0123456789";
  i = 0;

  while(str[i] != '\0')
  {
    ft_putchar(str[i]);
    i++;
  }
  ft_putchar('\n');
}

int main(void)
{
  ft_print_numbers();
  return(0);
}
