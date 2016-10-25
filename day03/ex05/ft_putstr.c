#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;

  while(str[i] != '\0')
  {
    ft_putchar(str[i]);
    i++;
  }
}

int main(void)
{
  char *str;

  str= "42 : la grande reponse sur la vie, l'univers et le reste.";
  ft_putstr(str);
  ft_putchar('\n');
  return(0);
}
