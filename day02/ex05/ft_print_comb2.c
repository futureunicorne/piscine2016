#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char str[4] = {0, 0, 0, 1};

	while (!((str[0] == 9) && (str[1] == 9)))
	{
		ft_putchar(str[0] + 48);
		ft_putchar(str[1] + 48);
		ft_putchar(' ');
		ft_putchar(str[2] + 48);
		ft_putchar(str[3] + 48);
    str[3]++;
		if (!((str[0] == 9) && (str[1] == 8)))
    {
			ft_putchar(',');
    }
		if (!((str[0] == 9) && (str[1] == 8)))
    {
    	ft_putchar(' ');
    }
    if ((str[3] = str[3] % 10) == 0)
		{
      	str[2]++;
    }
    if (str[2] == 10)
		{
      str[2] = str[0];
			str[1]++;
			if ((str[1] = str[1] % 10) == 0)
      {
	       str[0]++;
      }
			str[3] = str[1] + 1;
		}
	}
}
int main(void)
{
  ft_print_comb2();
  return(0);
}
