#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int nb = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - '0';
	return (nb * sign);
}

void    ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char **argv)
{
	int i = 1;

	int result;
	if (argc == 2)
	{
		int tab = ft_atoi(argv[1]);
		while (i <= 9)
		{
			result = i * tab;
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(tab);
			write(1, " = ", 3);
			ft_putnbr(result);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}