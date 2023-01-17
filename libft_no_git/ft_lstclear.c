/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:37:09 by pjay              #+#    #+#             */
/*   Updated: 2022/11/14 12:21:35 by pjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*in;

	if (!del || !*lst || !del)
		return ;
	while (*lst)
	{
		in = (*lst)->next;
		ft_lstdelone(*lst, (del));
		*lst = in;
	}
	free(*lst);
	*lst = NULL;
}

/*int main()
{
	t_list *newlist;

	newlist->content = ft_lstnew("ceci est un test\n");
	newlist->content = ft_lstnew("ceci est un test\n");
	newlist->content = ft_lstnew("ceci est un test\n");
	newlist->content = ft_lstnew("ceci est un test\n");
	newlist->content = ft_lstnew("ceci est un test\n");
	ft_lstclear()

	while (newlist)
	{
		printf(newlist->content);
		newlist = newlist->next;
	}
}*/
