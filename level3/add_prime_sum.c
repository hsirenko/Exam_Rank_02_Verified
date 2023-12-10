#include <unistd.h>

int ft_atoi(char *s)
{
	int res = 0;

	while (*s)
		res = res * 10 + *s++ - '0';
	return (res);
}

void ft_putnbr(int i)
{
	char digit;

	if (i >= 10)
		ft_putnbr(i / 10);
	digit = i % 10 + '0';
	write(1, &digit, 1);
}

int		is_prime(int n)
{
	int i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int new_num = 0;
	int given_num;

	if (argc == 2)
	{
		given_num = ft_atoi(&argv[1][i]);
		while (given_num > 1)
		{
			if (is_prime(given_num))
			{
				new_num += given_num;
			}
			given_num--;
		}
		ft_putnbr(new_num);
	}
	else
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}



//int is_prime(int i)
//{
//	int loop;
//
//	loop = 2;
//	if (i <= 1)
//		return (0);
//	while (loop * loop <= i)
//	{
//		if (i % loop == 0)
//			return (0);
//		loop++;
//	}
//	return (1);
//}