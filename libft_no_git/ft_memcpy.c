/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:44 by pjay              #+#    #+#             */
/*   Updated: 2022/11/15 15:27:36 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;
	void	*new;

	i = 0;
	if (!dest && !src)
		return (NULL);
	new = dest;
	while (i < size)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (new);
}
/*int main()
{
	int array [] = { 54, 85, 20, 63, 21 };
	int * copy = NULL;
	int length = sizeof( int ) * 5;

	copy = (int *) malloc( length );
	printf("ok");
	memcpy( copy, NULL, length );
	printf("ok");

	for( length=0; length<5; length++ )
	{
		printf( "%d ", copy[ length ] );
	}
	printf( "\n" );

	free( copy );

	return EXIT_SUCCESS;
}*/
