#include <stdio.h>

char  *ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  i = 0;
  while(i < n)
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  while(i < n)
  {
    dest[i] = '\0';
    i++;
  }
  return(dest);

}

int main(void)
{
  char dest[7] = "lenovaa";
  char src[7] = "lenovoo";
  unsigned int n;

  n = 4;
  ft_strncpy(dest, src, n);
  printf("%s ""%p\n", src, src);
  printf("%s ""%p\n", dest, dest);
  return(0);
}
