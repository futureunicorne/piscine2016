#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
  int cpt;
  int i;

  i = 0;
  cpt = 0;
  while(1)
  {
    cpt = cpt + (s1[i] - s2[i]); // caractere 1 - caractere 2
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
}
int main(void)
{
  char *s1;
  char *s2;

  s1 = "azzs";
  s2 = "azqs";

  ft_strcmp(s1, s2);
  printf("%d\n", strcmp(s1, s2));
  printf("%d\n", ft_strcmp(s1, s2));
  return(0);
}
