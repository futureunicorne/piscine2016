#include <stdio.h>

void ft_div_mod(int a, int b, int *diva, int *mod)
{
    *diva = a / b;
    *mod = a % b;
}
int main(void)
{
  int c;
  int d;
  int resultat;
  int reste;
  int *divi;
  int *modu;  

  c = 25;
  d = 3;
  reste = 0;
  resultat = 0;
  divi = &resultat;
  modu = &reste;

  ft_div_mod(c, d, divi, modu);

  printf("le resultat est de %d" " et le reste est de %d",resultat, reste);
  return(0);

}
