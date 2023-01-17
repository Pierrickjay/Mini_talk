/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:40 by pjay              #+#    #+#             */
/*   Updated: 2022/11/08 14:23:40 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_div(long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		count++;
		n /= 10;
	}
	if (count == 0)
		count++;
	return (count);
}

void	signzero(char *str)
{
	str[0] = '0';
}

char	*ft_itoa(int n)
{
	int			count;
	char		*str;
	long int	nb;

	nb = n;
	count = count_div(nb);
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	if (nb == 0)
		signzero(str);
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb)
	{
		str[count - 1] = (nb % 10) + '0';
		count--;
		nb /= 10;
	}
	return (str);
}

// int main()
// {
// 	char *str;

// 	str = ft_itoa('!');
//  	printf("%s", str);
// 	free(str);
// }
