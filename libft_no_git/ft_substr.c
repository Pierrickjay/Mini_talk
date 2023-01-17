/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:08:44 by pjay              #+#    #+#             */
/*   Updated: 2022/11/11 16:40:09 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*allocchar(size_t len, size_t slen, unsigned int start, char const *s)
{
	size_t	i;
	char	*bigstr;
	size_t	j;

	j = 0;
	i = start;
	if (len >= slen)
			bigstr = malloc(sizeof(char) * (slen - start + 1));
	else
		bigstr = malloc(sizeof(char) * (len + 1));
	if (bigstr == NULL)
		return (NULL);
	while (s[i] && i < (start + len))
	{
		bigstr[j] = s[i];
		i++;
		j++;
	}
	bigstr[j] = '\0';
	return (bigstr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*bigstr;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start < slen)
	{
		bigstr = allocchar(len, slen, start, s);
		if (bigstr == NULL)
			return (NULL);
	}
	else
	{
		bigstr = malloc(sizeof(char));
		if (bigstr == NULL)
			return (NULL);
		bigstr[0] = '\0';
	}
	return (bigstr);
}

/*int main()
{
	const char test[] = "tripouille";
	char *str;

	str = ft_substr("tripouille", 0, 42000);
	printf("%s", str);
}*/
