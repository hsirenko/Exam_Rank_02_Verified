#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *s1, char *s2, int n)
{
	int i = 0;
	while (*s2 && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int wc = 0;
	int start = 0;
	int end = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == '\t' || str[i] == '\0' || str[i] == ' '))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != '\t' && str[i] != '\0' && str[i] != ' '))
			i++;
	}
	char **result = (char **)malloc(sizeof(char * ) * (wc + 1));
	while (str[end])
	{
		while (str[end] && (str[end] == ' ' || str[end] == '\t' || str[end] == '\0'))
			end++;
		start = end;
		while (str[end] && (str[end] != ' ' && str[end] != '\t' && str[end] != '\0'))
			end++;
		if (end > start)
		{
			result[j] = (char *)malloc(sizeof(char *) * (end - start + 1));
			while (result[j])
			{
				ft_strcpy(result[j], &str[start], end - start);
				j++;
			}
		}
		result[j] = NULL;
	}
	return (result);
}

/*int main()
{
	char *str = "String to be split";

	int i = 0;
	char **result = ft_split(str);

	while (str[i])
	{
		printf("Pos: %d, word: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}*/


//char *ft_strcpy(char *s1, char *s2, int n)
//{
//	int i = 0;
//	while (n > i && *s2)
//	{
//		s1[i] = s2[i];
//		i++;
//	}
//	s1[i] = '\0';
//	return (s1);
//}
//
//char **ft_split(char *str)
//{
//	int start = 0;
//	int end = 0;
//	int wc = 0;
//	int i = 0;
//	int j = 0;
//
//	while (str[i])
//	{
//		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\0'))
//			i++;
//		if (str[i])
//			wc++;
//		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\0'))
//			i++;
//	}
//	char **result = (char **)malloc(sizeof(char *) * (wc + 1));
//	while (str[end])
//	{
//		while (str[end] && (str[end] == ' ' || str[end] == '\t' || str[end] == '\0'))
//			end++;
//		start = end;
//		while (str[end] && (str[end] != ' ' && str[end] != '\t' && str[end] != '\0'))
//			end++;
//		if (end > start)
//		{
//				result[j] = (char *)malloc(sizeof(char *) * (end - start + 1));
//				while(result[j])
//				{
//					ft_strcpy(result[j], &str[start], end - start);
//					j++;
//				}
//		}
//	}
//	result[j] = NULL;
//	return(result);
//}
//
//int main()
//{
//	char *str = "String to be split";
//	int i = 0;
//
//	char **result = ft_split(str);
//
//	while (result[i])
//	{
//		printf("pos: %d, str: %s\n", i, result[i]);
//		free(result[i]);
//		i++;
//	}
//	free(result);
//}