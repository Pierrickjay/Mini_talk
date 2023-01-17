/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serveur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:28:53 by pjay              #+#    #+#             */
/*   Updated: 2022/12/23 15:42:45 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static char	g_str[9];

void	handler(int signal)
{
	static int	i = 0;

	if (signal == SIGUSR1)
	{
		g_str[i] = '1';
		i++;
	}
	if (signal == SIGUSR2)
	{
		g_str[i] = '0';
		i++;
	}
	if (i == 8)
	{
		g_str[i + 1] = '\0';
		ft_printf("%c", ft_atoi_base(g_str, "01"));
		i = 0;
	}
}

void	handler_end(int signal)
{
	if (signal == SIGINT)
		ft_printf("\nServer Close\n");
	exit (0);
}

int	main(int ac, char **av)
{
	pid_t				pid;

	if (ac != 1 && av[1])
	{
		ft_printf("Le serveur ne prend aucun paramettre");
		return (0);
	}
	pid = getpid();
	ft_printf("PID = %d\n", pid);
	while (1)
	{
		signal(SIGUSR2, handler);
		signal(SIGUSR1, handler);
		signal(SIGINT, handler_end);
	}
}
