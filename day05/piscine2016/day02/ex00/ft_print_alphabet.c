#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_alphabet(char *str)
{
  int i;

  while (str[i] != '\0')
  {
        ft_putchar(str[i]);
        i++;
  }
  ft_putchar('\n');
}

int main()
{
    char *str;

    str = "abcdefghijklmnopqrstuvwxyz";
    ft_print_alphabet(str);
    return(0);
}
