#include <stdio.h>

int ft_atoi(char *str)
{
  int i;
  int sign;
  int number;

  i = 0;
  sign = 1;
  number = 0;

  while(str[i] >= 0 && str[i] <= 32 && str[i] != '\0')
  {
    i++;
  }
  if(str[i] == '-')
  {
    sign = -1;
    i++;
  }
  while((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
  {
    number = str[i] - '0' + number * 10;
    ++i;
  }
  return(sign * number);
}

int main(void)
{
  char *str;

  str = "23453";
  ft_atoi(str);
  printf("%d", ft_atoi(str));
  return(0);
}
