/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:24:27 by pjay              #+#    #+#             */
/*   Updated: 2022/11/15 15:27:57 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && !size)
		return (NULL);
	if (little[0] == 0 || ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < size)
	{
		j = 0;
		while (big[j + i] && little[j] && i + j < size
			&& big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char src[] = "Salut a tous";
	char dest[] = "";
	char src2[] = "Salut a tous";
	char dest2[] = "";
	int result;

	printf("le result de ma fonction chaine : %s\n",
	ft_strnstr(src, dest, 30));
	printf("le result de la vraie fonction chaine : %s
	\n",strnstr(src2, dest2, 30));
}*/
