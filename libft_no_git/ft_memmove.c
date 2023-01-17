/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:08:57 by pjay              #+#    #+#             */
/*   Updated: 2022/11/15 15:28:09 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	str1 = (char *)dest;
	str2 = (char *)src;
	if (str1 > str2)
	{
		while (n > 0)
		{
			str1[n - 1] = str2[n - 1];
			n--;
		}
	}
	else
	{
		while (++i < n)
		{
			str1[i] = str2[i];
		}
	}
	return (dest);
}
