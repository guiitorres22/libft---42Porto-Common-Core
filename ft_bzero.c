/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <gtinani-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:00:57 by gtinani-          #+#    #+#             */
/*   Updated: 2024/04/15 14:42:22 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = 0;
	}
}
//Preenche os primeiros n bytes da area de memoria apontada por s com zeros
/*
int	main()
{
	char	buffer[10];
	
	ft_bzero(bufer, sizeof(buffer));
}
*/
