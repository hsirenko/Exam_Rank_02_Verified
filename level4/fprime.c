#include <stdlib.h>
#include <stdio.h>

int ft_prime(int nb)
{
	int i = 2;
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
			i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int flag = 1;
	int prime = 2;
	int num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num == 1)
			printf("1");
		while (num >= prime)
		{
			if (num % prime == 0 && ft_prime(prime))
			{
				if (flag == 1)
					printf("%d", prime);
				else
					printf("*%d", prime);
				flag = 0;
				num = num / prime;
			}
			else
				prime++;
		}
	}
	printf("\n");
}

//int is_prime(int nb)
//{
//	int i = 2;
//	while (nb > i)
//	{
//		if (nb % i == 0)
//			return (0);
//		i++;
//	}
//	return (1);
//}
//int main(int argc, char **argv)
//{
//	int num;
//	int prime = 2;
//	int flag = 1;
//
//	if (argc == 2)
//	{
//		num = atoi(argv[1]);
//		if (num == 1)
//			printf("1");
//		while (num >= prime)
//		{
//			if (num % prime == 0 && is_prime(prime))
//			{
//				if (flag == 1)
//					printf("%d", prime);
//				else
//					printf("*%d", prime);
//				flag = 0;
//				num = num / prime;
//			}
//			else
//				prime++;
//		}
//	}
//	printf("\n");
//}























