/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:08:29 by helensirenko      #+#    #+#             */
/*   Updated: 2023/12/10 14:46:36 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	char c;

	if (argc == 2)
	{
		while (argv[1][i])
		{

			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = argv[1][i] + 32;
				write(1, "_", 1);
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

//i[0] = a - z;
//if i = A - Z -> put '_' convert A to a. 