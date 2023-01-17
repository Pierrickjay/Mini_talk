/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:45:52 by pjay              #+#    #+#             */
/*   Updated: 2022/12/23 12:44:33 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_all(char *str, char *pip)
{
	int		i;
	int		a;
	char	*result_itoa;
	char	*result_str;

	i = 0;
	while (str[i])
	{
		result_itoa = ft_itoa(str[i]);
		result_str = ft_convert_base(result_itoa, "0123456789", "01");
		a = 0;
		while (result_str[a])
		{
			if (result_str[a] == '1')
				kill(ft_atoi(pip), SIGUSR1);
			else
				kill(ft_atoi(pip), SIGUSR2);
			sleep(1 / 100);
			a++;
		}
		i++;
		free(result_itoa);
		free(result_str);
	}
}

int	main(int ac, char **av)
{
	if (ac <= 2 || ac > 3)
	{
		ft_printf("le nombre d'argument n'est pas le bon");
		return (0);
	}
	if (ft_strlen(av[1]) != 7)
	{
		ft_printf("Le PID n'a pas la taille valable");
		return (0);
	}
	send_all(av[2], av[1]);
}
