/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:24:04 by pjay              #+#    #+#             */
/*   Updated: 2022/11/08 14:24:04 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*printit(char *bigstr, char const *s1, char const *s2)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (s1[i])
	{
		bigstr[i] = s1[i];
		i++;
	}
	while (s2[a])
	{
		bigstr[i] = s2[a];
		a++;
		i++;
	}
	bigstr[i] = '\0';
	return (bigstr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*bigstr;

	bigstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (bigstr == NULL)
		return (NULL);
	printit(bigstr, s1, s2);
	return (bigstr);
}

/*int main()
{
	const char s1[] = "ceci n'est pas un test";
	const char s2[] = "Enfaite si";
	char *big;

	big = ft_strjoin(s1, s2);
	printf("%s", big);
}*/
