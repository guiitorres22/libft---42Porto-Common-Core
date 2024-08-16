/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtinani- <gtinani-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:20:37 by guilherme         #+#    #+#             */
/*   Updated: 2024/05/06 15:08:31 by gtinani-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (! p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
/*nmemb n de elementos a serem alocados, size tamanho em byte de cada elemento
Aloca espaco para nmemb * size bytes usando malloc
verifica se a alocacao foi bem sucedida
se falahar, retorna null. Se nao, preenche a m alocada com zero usando ft_bzero
retorna o ponteiro para a memoria alocada*/
/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	size_t	num_elements = 5;
	size_t	element_size = sizeof(int);
	int		*arr = (int *)ft_calloc(num_elements, element_size);

	if (!arr)
	{
		printf("Erro ao alocar memória.\n");
		return (1);
	}

	for (size_t i = 0; i < num_elements; ++i)
		arr[i] = i * 10;


	for (size_t i = 0; i < num_elements; ++i)
		printf("arr[%zu] = %d\n", i, arr[i]);

	free(arr);

	return (0);
}*/
