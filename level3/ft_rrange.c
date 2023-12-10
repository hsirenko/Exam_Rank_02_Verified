
#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
	int abs = 1;
	abs = end - start;
	if ((end - start) < 0)
		abs = abs * (-1);
	int len = abs + 1;
	int *result;
	int temp;

	temp = start;
	start = end;
	end = temp;

	result = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (end >= start)
		{
			result[i] = start;
			start++;
		}
		else
		{
			result[i] = start;
			start--;
		}
		i++;
	}
	return (result);
}

/*int main()
{
	int i = 0;
	int *result = ft_rrange(1, 3);

	while (i < 4)
	{
		printf("%d, ", result[i]);
		i++;
	}

}*/