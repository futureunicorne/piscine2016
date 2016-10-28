 #include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
int main(void)
{
  char *str;
  char *meule;

  str = "lenovastream";
  meule = "astream";
	ft_strstr(str, meule);
  printf("%s\n", ft_strstr(str, meule));
	printf("%s\n", strstr(str, meule));
  return(0);
}
