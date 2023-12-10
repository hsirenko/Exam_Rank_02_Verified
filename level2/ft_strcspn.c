#include <stdio.h>
#include <string.h>

size_t    ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;

	while (s[i])
	{
	     j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return(i);
}

/*int main()
{
  const char *s = "string I am spanning";
  const char *accept = "I";

  size_t mylen = ft_strcspn(s, accept);


	 printf("mylen: %zu\n", mylen);

	  size_t origlen = strcspn(s, accept);
	  printf("origlen: %zu\n", origlen);
}*/