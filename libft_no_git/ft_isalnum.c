/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:22 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 12:53:37 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*int main()
{
	char test[] = "ceci est un test 123112 EZEEZ1EEE";
	int i;

	i = 0;
	printf("%s\n", test);
	while (test[i])
	{
		printf("%d", ft_isalnum(test[i]));
		i++;
	}
}*/
