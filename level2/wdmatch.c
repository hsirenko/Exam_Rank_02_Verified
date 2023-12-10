#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *s)
{
    while (*s)
        write(1, s++, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[2][j])
        {
            if (argv[2][j] == argv[1][i])
				i++;
            j++;
        }
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}