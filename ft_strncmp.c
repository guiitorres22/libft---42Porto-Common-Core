/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <gtinani-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:49:59 by gtinani-          #+#    #+#             */
/*   Updated: 2024/04/26 17:02:42 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}

/*int	main(void)
{
	char	ss1[] = "aleluia";
	char	ss2[] = "aracoles";
	int	nb = 5;

	printf("%d", ft_strncmp(ss1, ss2, nb));
}*/
/*
** Função ft_strncmp:
** Compara os primeiros 'n' caracteres das strings 's1' e 's2'.
** Retorna 0 se as strings forem iguais até o caractere 'n'.
** Caso contrário, retorna a diferença entre os valores ASCII dos caracteres.
**
** Parâmetros:
** - s1: Ponteiro para a primeira string.
** - s2: Ponteiro para a segunda string.
** - n: Número de caracteres a serem comparados.
**
** Retorno:
** - 0 se as strings forem iguais até o caractere 'n'.
** - Diferença entre os valores ASCII dos caracteres, caso contrário.
*/
