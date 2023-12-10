/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:51:40 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/22 15:54:46 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
            int i = 0;
           
			if (!s1 || !s2)
				return (NULL);
			while (*s1)
			{
				i = 0;
				while (s2[i])
				{
					if (*s1 == s2[i])
					return ((char *)s1);
					i++;
				}
				s1++;
			}
            return (NULL);
}

int main()
{
            const char *s1 = "Hello";
            const char *s2 = "ala";
			char *result = ft_strpbrk(s1, s2);
			printf("Found letter: %c at position: %ld\n", *result, result - s1);

	char *orig = strpbrk(s1, s2);
	printf("Found orig letter: %c at position: %ld\n", *orig, orig - s1);
}