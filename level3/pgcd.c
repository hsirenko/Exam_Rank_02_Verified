#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
	unsigned int num1;
	unsigned int num2;
	unsigned int n;


	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		n = num1;
		while (n > 0)
		{
			if (num1 % n == 0 && num2 % n == 0)
			{
				printf("%u\n", n);
				return (0);
			}
			n--;
		}
	}
	else
		printf("\n");
}

//int main(int argc, char **argv) {
//	unsigned int num1;
//	unsigned int num2;
//
//
//	if (argc == 3)
//	{
//		num1 = atoi(argv[1]);
//		num2 = atoi(argv[2]);
//
//		if (num1 > 0 && num2 > 0)
//		{
//			while (num1 != num2)
//			{
//				if (num1 > num2)
//					num1 -= num2;
//				else
//					num2 -= num1;
//			}
//			printf("%u\n", num1);
//		}
//	}
//	else
//		printf("\n");
//}

