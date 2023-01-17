/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:31 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 12:54:17 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*int main()
{
	char test[] = "ceci est un tes1t99999999999999999999";
	int i;

	i = 0;
	printf("%s\n", test);
	while (test[i])
	{
		printf("%d", ft_isdigit(test[i]));
		i++;
	}

}*/
