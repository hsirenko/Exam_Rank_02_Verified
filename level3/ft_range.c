
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int *result;
	int i = 0;
	int abs = 1;
	abs = end - start;
	if ((end - start) < 0)
		abs = abs * (-1);
	int len = abs + 1; // absolute value for length calculation
	//printf("len %d\n", len);
	result = (int *)malloc(sizeof(int) * len);
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		if (start <= end)
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

/*int main() {
	int i = 0;
	int *result = ft_range(-10, 3);
	//if (result != NULL) {
		while (i < 14) {
			printf("%d, ", result[i]);
			i++;
		//}
	}
	//free(result);
}*/



//	if (result != NULL)
//	{
//		while (i < (end - start + 1))
//		{
//			char c = result[i] + '0'; // convert int to char
//			write(1, &c, 1);
//			i++;
//		}
//	}
//	free(result);

