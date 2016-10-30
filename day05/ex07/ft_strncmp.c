#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  int cpt;
  unsigned int i;

  i = 0;
  cpt = 0;

  while (1 && (i < n))
  {
    cpt = cpt + (s1[i] - s2[i]);
    if(s1[i] == '\0' && s2[i] == '\0')
    {
      return(cpt);
    }
    if(s1[i] == s2[i])
    {
      i++;
    }
    else
    {
      return(cpt);
    }
  }
  return(cpt);
}

int main(void)
{
  char *s1;
  char *s2;
  int b;

  s1 = "qassd";
  s2 = "wzusd";
  b = 2;
  printf("%d\n", strncmp(s1, s2, b));
  printf("%d\n", ft_strncmp(s1, s2, b));
  return(0);
}
