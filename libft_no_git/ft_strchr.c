/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:57 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 12:39:36 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c )
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

/*int main()
{
	char s[] = "tripouille";

	printf("%s \n", ft_strchr(s, 0));
	printf("%s \n", strchr(s, 0));
	printf("%s \n", ft_strchr(s, 't' + 256));
	printf("%s \n", strchr(s, 't' + 256));
}*/
