/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:27:47 by helensirenko      #+#    #+#             */
/*   Updated: 2023/12/07 22:00:47 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int main()
{
	char *s1 = "coucou";
	char *s2 = "CC";
	int result = ft_strcmp(s1, s2);
	printf("%d\n", result);
	int orig = strcmp(s1, s2);
	printf("%d\n", orig);

}*/
