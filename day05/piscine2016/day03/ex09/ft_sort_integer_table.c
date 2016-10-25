#include <stdio.h>

void    ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	j;
	int temp;

	i = 0;
	while(i < size)
	{
		j = i;
		while(j <= size)
		{
			if(tab[j] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
int main(void)
{
  int tab[8] = {6,5,3,2,9,3,8,4};
  int *tab1;
  int size;
	int i;

  tab1 = tab;
  size = 7;
	i = 0;
  ft_sort_integer_table(tab1, size);
	while(i < 8)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}
