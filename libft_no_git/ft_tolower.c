/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:24:34 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 12:50:13 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
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
		printf("%c", ft_tolower(test[i]));
		i++;
	}
}*/
