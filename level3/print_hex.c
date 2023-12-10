#include <unistd.h>

int ft_atoi(char *str)
{
	int nb = 0;
	while (*str)
		nb = nb * 10 + *str++ - '0';
	return(nb);
}

void print_hex(int n)
{
	char hex[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n /16);
	write(1, &hex[n % 16], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}

//int ft_atoi(char *str)
//{
//	int nbr = 0;
//
//	while (*str)
//		nbr = nbr * 10 + *str++ - '0';
//	return (nbr);
//}
//
//void print_hex(int n)
//{
//	char hex[] = "0123456789abcdef";
//	if (n >= 16)
//		print_hex(n / 16);
//		write(1, &hex[n % 16], 1);
//}
//
//int main(int argc, char **argv)
//{
//
//	if (argc == 2)
//		print_hex(ft_atoi(argv[1]));
//	write(1, "\n", 1);
//}

// 322278 6
//20142 6
// 1258  a
//78  e
// 16 1
// 4 4