/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:25 by pjay              #+#    #+#             */
/*   Updated: 2022/12/23 13:27:33 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int main()
{
	char test[] = "ceci est un test";
	int i;

	i = 0;
	printf("%s\n", test);
	while (test[i])
	{
		printf("%d", ft_isalpha(test[i]));
		i++;
	}

}*/
