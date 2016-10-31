#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
  int i;

  i = 0;
  if(!str)
  {
    return(1);
  }
  while(str[i] != '\0')
  {
    if(!(str[i] >= 'A' && str[i] <= 'Z'))
    {
      return(0);
    }
    i++;
  }
  return(1);
}

int main(void)
{
  char *str;

  str = "FFGRTHRF";
  ft_str_is_uppercase(str);
  printf("%d\n",ft_str_is_uppercase(str));
  return(0);
}
