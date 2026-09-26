/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:56:57 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/13 00:19:09 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*s;
	int		*n;
	int		*m;

	n = malloc(sizeof(int));
	m = malloc(sizeof(int));
	*n = 13;
	*m = 37;
	lst = malloc(sizeof(t_list));
	lst->content = n;
	lst->next = malloc(sizeof(t_list));
	lst->next->content = m;
	lst->next->next = NULL;
	ft_lstclear(&lst, del);
	if (lst == NULL)
		printf("List is cleared\n");
	return (0);
}
*/
