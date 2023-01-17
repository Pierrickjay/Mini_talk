/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_spe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:14:07 by pjay              #+#    #+#             */
/*   Updated: 2022/12/23 11:16:56 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_strlen_spe(char *str, char *base)
{
	int	i;
	int	j;
	int	check;

	i = swapatoii(str);
	while (str[i])
	{
		j = -1;
		check = 0;
		while (base[++j])
		{
			if (str[i] == base[j])
				check++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}
