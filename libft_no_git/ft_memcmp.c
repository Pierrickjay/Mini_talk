/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:11:56 by pjay              #+#    #+#             */
/*   Updated: 2022/11/15 12:51:58 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		n--;
	}
	return (0);
}
/*int main()
{
	int result;
	char example1[50];
	char example2[50];

	strcpy(example1, "C memcmp at TechOnTheNet.com");
	strcpy(example2, "C memcmp is a memory compare function");
	result = ft_memcmp(example1, example2, 9);
	if (result == 0)
		printf("Arrays are the same\n");
	result = ft_memcmp(example1, example2, 10);
	if (result < 0)
		printf("Second array is less than the first\n");
}*/
