/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:47 by pjay              #+#    #+#             */
/*   Updated: 2022/11/15 14:49:45 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset( void *s, int c, size_t n )
{
	char	*str;
	size_t	i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int main()
{
	int array [] = { 54, 85, 20, 63, 21 };
	size_t size = sizeof( int ) * 5;
	int length;

	for( length=0; length<5; length++)
		printf( "%d ", array[ length ] );
	printf( "\n" );
	ft_memset( array, 0, size );
	for( length=0; length<5; length++)
	{
		printf( "%d ", array[ length ] );
	}
	printf( "\n" );
}*/
