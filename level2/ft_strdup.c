/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:02:06 by helensirenko      #+#    #+#             */
/*   Updated: 2023/12/10 14:19:14 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
            char *dest;
            int i = 0;
           	int len = 0;

            while (src[len])
                         len++;
            dest = malloc(sizeof(char *) * len + 1);
            if (dest == NULL)
                        return (NULL);
			dest[len] = '\0';
            while (src[i])
            {
                        dest[i] = src[i];
                        i++;
            }
            return (dest);
}

/*int main()
{
            char *src = "H";
            char *result;

            result = ft_strdup(src);

            printf("Source: %s\nResult: %s\n", src, result);
            printf("Shorter ver: %s\n", ft_strdup(src));
			printf("Orig ver: %s\n", strdup(src));
}*/