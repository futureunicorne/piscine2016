#include <stdio.h>

char  *ft_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while(src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
    dest[i] = '\0'; // pour marquer la fin du tab
    return(dest);
}

int main(void)
{
  char str[6] = "lenovo"; // pour pouvoir le tester utiliser tab
  char dest[6] = "lenova";


  ft_strcpy(dest, str); // dest avant str
  printf("%s " "%p\n", str, str); // controle ladresse
  printf("%s " "%p\n", dest, dest);
  return(0);
}
