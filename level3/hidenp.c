#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
int main(int argc, char **argv)
{
	int i = 0;
	int j  = 0;
	int counter = 0;

	if (argc == 3)
	{
		while (argv[1][i] && argv[2][j])
		{
			if (argv[2][j] == argv[1][i])
			{
				counter ++;
				i++;
			}
			j++;
		}
		if (counter == ft_strlen(argv[1]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}