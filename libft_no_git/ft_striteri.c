/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:53:22 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 11:42:38 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void test(unsigned int index, char *s1)
{
	s1[index] = index + 50;
}
void	iter(unsigned int i, char * s)
{
	*s += i;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

/*int main()
{
	char test1[] = "0000000000";
	ft_striteri(test1, iter);
	printf("%s", test1);
}*/
