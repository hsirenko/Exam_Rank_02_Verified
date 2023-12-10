#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 3)
	{
		int	ascii[255] = {0};
		
		while (i < 3)
		{
			int j = 0;
			while (argv[i][j])
			{
				if (ascii[(int)argv[i][j]] == 0)
				{
					ascii[(int)argv[i][j]] = 1;
					write(1, &argv[i][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}