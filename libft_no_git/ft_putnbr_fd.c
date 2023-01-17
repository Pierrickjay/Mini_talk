/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:35:12 by pjay              #+#    #+#             */
/*   Updated: 2022/11/08 15:01:11 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	b;

	if (n < 0)
	{
		b = n * -1;
		ft_putchar_fd('-', fd);
	}
	else
	{
		b = n;
	}
	if (b >= 10)
	{
		ft_putnbr_fd(b / 10, fd);
		ft_putnbr_fd(b % 10, fd);
	}
	else
	{
		ft_putchar_fd((b + 48), fd);
	}
}

/*int main()
{
	int fd;
	fd = open("test.txt",O_RDWR );
	ft_putnbr_fd(900075, fd);
}*/
