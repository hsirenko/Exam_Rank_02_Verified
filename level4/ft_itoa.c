#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char *ft_itoa(int nbr)
{
	char *s;
	int len = 0;
	int temp = nbr;

	if (nbr ==  2147483647)
	{
		s = "2147483647\n";
		return (s);
	}
	if (nbr ==  -2147483648)
	{
		s = "-2147483648\n";
		return (s);
	}

	if (temp <= 0)
	{
		len++;
		temp = -temp;
	}
	while (temp)
	{
		len++;
		temp = temp / 10;
	}
	//printf("len %d\n", len);
	s = malloc(sizeof(char *) * len + 1);
	if (s == NULL)
		return (NULL);
	s[len] = '\0';

	if (nbr == 0)
	{
		*s = '0';
		return (s);
	}

	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;

	}
	while (nbr)
	{

		s[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (s);
}

/*int main()
{
    int nbr = -22;
    char *result = ft_itoa(nbr);
    printf("%s\n", result);

    free(result);
}*/