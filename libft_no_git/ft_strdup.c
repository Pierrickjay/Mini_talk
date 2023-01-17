/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:37:27 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 16:51:37 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicated;
	int		sizesrc;
	int		i;

	i = 0;
	sizesrc = ft_strlen(s) + 1;
	duplicated = (char *) malloc (sizesrc * sizeof(char));
	if (duplicated == NULL)
		return (NULL);
	while (s[i])
	{
		duplicated[i] = s[i];
		i++;
	}
	duplicated[i] = s[i];
	return (duplicated);
}
