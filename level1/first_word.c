/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 23:38:23 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/13 02:21:55 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
            char *s;
            int i;
            
             i = 0;
            if (argc == 2)
            {
                s = argv[1];
                while (s[i] == ' ' || s[i] == '\t')
                {
                        i++;
                }
                while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
                {
                    write(1, &s[i], 1);
                    i++;
            }
            }
            write(1, "\n", 1);
            return (0);
}