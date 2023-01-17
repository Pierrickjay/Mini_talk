/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:36:52 by pjay              #+#    #+#             */
/*   Updated: 2022/11/14 19:09:55 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char test(unsigned int index, char s1)
{
	s1 = index + 50;
	return (s1);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = malloc ((sizeof (char) * ft_strlen((char *)s)) + 1);
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char test1[] = "comment ca va";
	char *ptr;
	ptr = ft_strmapi(test1, &test);
	printf("%s", ptr);
	free(ptr);
}*/
