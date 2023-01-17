/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:18 by pjay              #+#    #+#             */
/*   Updated: 2022/11/15 12:49:49 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*int main()
{
	int array [] = { 54, 85, 20, 63, 21 };
	size_t size = sizeof( int ) * 5;
	int length;

	for( length=0; length<5; length++)
		printf( "%d ", array[ length ] );
	printf( "\n" );
	ft_bzero( array, size );
	for( length=0; length<5; length++)
	{
		printf( "%d ", array[ length ] );
	}
	printf( "\n" );
}*/
