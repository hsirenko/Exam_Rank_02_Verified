/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:18:35 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/24 16:53:26 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	
	while (*s)
	{
		while (accept[i])
		{
			if (ft_strchr((char *)s, accept[i]) == 0)
			{
				break;
			}
			i++;
		}
		s++;	
	}
	return (i);
}

int main()
{
            char *s = "String spaniazzz";
            const char *a = "spania";
			//char c = 't';
			//printf("%s\n", ft_strchr(s, c));
			printf("%zu\n", ft_strspn(s, a));
			return (0);
}