/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:36 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 12:54:24 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (0);
	else
		return (1);
}
/*int main()
{
	char test[] = "ceci es\nun test 123112\tEZEEZ1EEE";
	int i;

	i = 0;
	printf("%s\n", test);
	while (test[i])
	{
		printf("%d", ft_isprint(test[i]));
		i++;
	}
}*/
