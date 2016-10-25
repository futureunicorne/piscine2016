#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}


void ft_print_combs(void)
{
  char *str;
  int i;
  int j;
  int k;

  str = "0123456789";
  i = 0;
  j = 1;
  k = 2;
  while(str[i] != '\0')
  {
    j = i + 1;
      while(str[j] != '\0')
      {
        k = j + 1;
          while(str[k] != '\0')
          {
              ft_putchar(str[i]);
              ft_putchar(str[j]);
              ft_putchar(str[k]);
              if(!(str[i] == '7' && str[j] == '8' && str[k] == '9')) // different de 789
              {
              ft_putchar(',');
              ft_putchar(' ');
              }
              k++;
          }
          j++;
        }
        i++;
      }
  }

int main(void)
{
  ft_print_combs();
  return(0);
}
