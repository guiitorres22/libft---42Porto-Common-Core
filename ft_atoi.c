/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <gtinani-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:27:54 by gtinani-          #+#    #+#             */
/*   Updated: 2024/04/24 19:28:23 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	signal;
	size_t	result;

	i = 0;
	signal = 1;
	result = 0;
	while ((str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v')
		|| (str[i] == '\f')
		|| (str[i] == '\r')
		|| (str[i] == ' '))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			signal = -signal;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * signal);
}
/*#include <stdio.h>

int	main()
{
    const char *str = "123"; 
    int valor = ft_atoi(str);
    printf("Valor convertido: %d\n", valor);
    return 0;
}
*/
//Transforma uma string em int
