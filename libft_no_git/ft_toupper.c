/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:24:38 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 12:50:07 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*int main()
{
	char test[] = "ceci est un test 123112 EZEEZ1EEE";
	int i;

	i = 0;
	printf("%s\n", test);
	while (test[i])
	{
		printf("%c", ft_toupper(test[i]));
		i++;
	}
}*/
