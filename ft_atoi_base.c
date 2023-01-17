/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:59:10 by pjay              #+#    #+#             */
/*   Updated: 2022/12/23 18:50:59 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	swapatoii(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	return (i);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 0 && nb == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power -1));
	else
		return (1);
}

int	ft_strstr_modif(char *str, char *to_find)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	if (!(to_find[i]))
		return (0);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			a++;
		}
		i++;
	}
	if (a > 0)
		return (1);
	return (0);
}

int	checkatoii(char *str, char *base, int baselengh, int nombre)
{
	int	i;
	int	j;
	int	strlengh;
	int	a;

	i = swapatoii(str);
	strlengh = ft_strlen_spe(str, base);
	a = i;
	i = -1;
	while (str[++i])
	{
		j = -1;
		while (base[++j])
		{
			if (str[i] == base[j])
			{
				nombre += j * (ft_recursive_power(baselengh, strlengh - a - 1));
				strlengh--;
				break ;
			}
		}
	}
	return (nombre);
}

int	ft_atoi_base(char *str, char *base)
{
	int				i;
	int				nombre;
	const int		baselengh = ft_strlen_spe(base, base);

	nombre = 0;
	nombre = checkatoii(str, base, baselengh, nombre);
	i = swapatoii(str);
	if (i < 0)
		return (nombre * -1);
	else
		return (nombre);
}
