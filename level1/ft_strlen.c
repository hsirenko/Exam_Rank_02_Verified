#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(char *str)
{
            int i = 0;
            while (str[i])
                 i++;
            return (i);
}

/*int main()
{
            char str[20] = "Hello";
            int result = ft_strlen(str);
            printf("%d", result);
}*/