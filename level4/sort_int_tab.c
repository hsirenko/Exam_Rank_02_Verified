#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int swap = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

/*int main()
{

	int i = 0;
	int tab[] = {3, 1, 12, 6};
	sort_int_tab(tab, 4);

	while (i < 4)
	{
		printf("sorted: %d\n", tab[i]);
		i++;
	}
}*/