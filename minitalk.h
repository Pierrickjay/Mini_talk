/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:47:12 by pjay              #+#    #+#             */
/*   Updated: 2022/12/23 13:58:06 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include "ft_printf/libftprintf.h"
# include "libft_no_git/libft.h"

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_atoi_base(char *str, char *base);
int		ft_strlen_spe(char *str, char *base);
int		swapatoii(char *str);

#endif
