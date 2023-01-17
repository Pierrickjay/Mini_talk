/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:55:40 by pjay              #+#    #+#             */
/*   Updated: 2022/11/14 15:26:53 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*ptr;
	unsigned int	count;

	count = size * nmemb;
	if (size == SIZE_MAX || nmemb == SIZE_MAX)
		return (NULL);
	ptr = malloc(count);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count);
	return ((void *)ptr);
}
/*int main()
{
	int i;
	int *pointer = (int *) ft_calloc( INT_NUMBER, sizeof(int) );

	i = 0;
	for ( i=0; i<INT_NUMBER-1; i++ )
	{
		pointer[i] = i;
	}

	for (i=0; i<INT_NUMBER; i++ )
	{
		printf( "%d ", pointer[i] );
	}
	printf( "\n" );
}*/
