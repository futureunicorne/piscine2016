#include <stdio.h>

int ft_atoi(char *str)
{
  int i;
  int sign;
  int number;

  i = 0;
  sign = 1;
  number = 0;

  while(str[i] >= 0 && str[i] <= 32 && str[i] != '\0') // ref ascii
  {
    i++; // verifie si il ya un caractere ascii entre 0 et 32
  }
  if(str[i] == '-') // pour le signe negatif
  {
    sign = -1;
    i++;
  }
  while((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
  { // seulement si compris entre 1 et 9
    number = str[i] - '0' + number * 10;
    ++i;
  }
  return(sign * number); // return le nmbr avec le signe
}

int main(void)
{
  char *str;

  str = "53-753";
  ft_atoi(str);
  printf("%d\n", ft_atoi(str));
  return(0);
}
