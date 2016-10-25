#include <stdio.h>

 int ft_recursive_power(int nb, int power)
 {
   int nb_origin;

   nb_origin = nb;
   if(power < 0) // necessaire pour que la recursive fonctionne
   {
     return(0);
   }
   if(power == 0)
   {
     return(1);
   }
   nb = ft_recursive_power(nb, power = power - 1);
   return(nb * nb_origin);
 }

 int main(void)
  {
   int nb;
   int power;

   nb = 2;
   power = 4;
   nb = ft_recursive_power(nb, power);
   printf("%d\n", nb);
   return(0);
 }
