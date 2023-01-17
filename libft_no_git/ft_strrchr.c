/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:24:31 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 11:49:08 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c )
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char *)&s[i]);
	i--;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*int main()
{
	char test[] = "ceci est un test 123112 EZEEZ1EEE";

	printf("%s \n", ft_strrchr(test, 49));
	printf("%s \n", strrchr(test, 49));
}*/
