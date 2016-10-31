#include <stdio.h>

char  *ft_strcapitalize(char *str)
{
  int i ;

  i = 0;
  while(str[i] != '\0')
  {
    if((str[0] >= 'a' && str[0] <= 'z'))
    {
      str[0] = str[0] - 32;
    }
    if(str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
    {
        str[i + 1] = str[i + 1] - 32;
    }
    i++;
  }
  return(str);
}

int main(void)
{
  char str[40] = "  il est trop tard pour dormir ";
  ft_strcapitalize(str);
  printf("%s\n", str);
  return(0);
}
