/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:24:23 by pjay              #+#    #+#             */
/*   Updated: 2022/11/15 15:28:18 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (0);
	while (s2[i] && s1[i] && s1[i] == s2[i] && i < size - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*int main()
{
	char test[] = "ceci";
	char test2[] = "ceci ";
	printf("%d \n", ft_strncmp("test\200", "test\0", 6));
	printf("%d \n", strncmp("test\200", "test\0", 6));
}*/
