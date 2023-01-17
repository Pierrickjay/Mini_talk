/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:24:07 by pjay              #+#    #+#             */
/*   Updated: 2022/11/15 15:29:02 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!dst && !size)
		return (0);
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*int main()
{
	char src[] = "lorem ipsum dolor sit amet";
	char dest[15] = "rrrrrrrrrrrrrrr";
	char src2[] = "lorem ipsum dolor sit amet";
	char dest2[15] = "rrrrrrrrrrrrrrr";
	int result;
	//memset(dest, 'r', 15);
	//memset(dest2, 'r', 15);

	result = strlcat(dest, src, 5);
	printf("le result de la vraie fonction : %d de la chaine : %s\n",result, dest);
	result = ft_strlcat(dest2, src2, 5);
	printf("le result de ma fonction : %d de la chaine : %s \n",result, dest2);
}*/
