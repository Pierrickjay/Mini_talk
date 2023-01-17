/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:27:02 by pjay              #+#    #+#             */
/*   Updated: 2022/12/23 13:16:16 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	print_it(int nb, char *str, char *result, int index)
{
	unsigned int	nbr;
	unsigned int	str_length;

	str_length = 0;
	while (str[str_length])
		str_length++;
	if (nb < 0)
	{
		result[index++] = '-';
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= str_length)
		print_it(nbr / str_length, str, result, index - 1);
	result[index] = str[nbr % str_length];
	return (index);
}

int	get_number_length(int number, char *base)
{
	int	length;
	int	base_length;

	base_length = 0;
	while (base[base_length])
		base_length++;
	length = 0;
	while (number >= base_length)
	{
		++length;
		number /= base_length;
	}
	return (++length);
}

int	get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

char	*fill_str(int last_index)
{
	char	*str;
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (last_index < 7)
	{
		i++;
		last_index++;
	}
	str = ft_calloc(i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (a < i)
	{
		str[a] = '0';
		a++;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*result;
	int				number;
	int				last_index;
	char			*str;
	char			*finish;

	if (!nbr || !base_from || !base_to)
		return (0);
	number = ft_atoi_base(nbr, base_from);
	result = ft_calloc((get_number_length(number, base_to) + 1), sizeof(char));
	if (result == NULL)
		return (NULL);
	last_index = print_it(number, base_to, result,
			get_number_length(number, base_to) - 1);
	str = fill_str(last_index);
	finish = ft_strjoin(str, result);
	free(str);
	free(result);
	if (finish == NULL)
		return (NULL);
	return (finish);
}

// int main(int ac, char **av)
// {
// 	char *str;

// 	str = ft_convert_base("1819818", "0123456789", "01234567889");
// 	printf("%s\n", str);
// 	free(str);

// }
