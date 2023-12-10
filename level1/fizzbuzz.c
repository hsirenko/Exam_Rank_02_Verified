/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:23:26 by helensirenko      #+#    #+#             */
/*   Updated: 2023/12/07 20:17:19 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
    char digit;
    if (nb > 9)
        ft_putnbr(nb / 10);
    digit = nb % 10 + '0';
    write(1, &digit, 1);
}
int main ()
{
            int i;

            i = 1;
            while (i <= 100)
            {
                        if (i % 3 == 0 && i % 5 == 0)
                        {
                                    write(1, "fizzbuzz", 8);
                        }
                        else if (i % 5 == 0)
                        {
                                    write(1, "buzz", 4);
                        }
                        else if (i % 3 == 0)
                        {
                                  write(1, "fizz", 4);  
                        }
                        else 
                        {
                                    ft_putnbr(i);
                        }
                        i++;
            write(1, "\n", 1);
            }
            return (0);
}