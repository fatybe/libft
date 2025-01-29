/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:20:50 by fbenjama          #+#    #+#             */
/*   Updated: 2024/11/13 00:16:14 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list	*s;
	t_list	*lst;
	int		*n;
	int		*m;

	n = malloc(sizeof(int));
	m = malloc(sizeof(int));
	if (!n || !m)
		return (0);
	*n = 13;
	*m = 37;
	lst = NULL;
	s = malloc(sizeof(t_list));
	if (!s)
		return (0);
	s->content = n;
	s->next = NULL;
	lst = s;
	s = malloc(sizeof(t_list));
	if (!s)
		return (0);
	s->content = m;
	s->next = NULL;
	lst->next = s;
	ft_lstdelone(lst->next, del);
	lst->next = NULL;
	if (lst != NULL)
		printf("Second node content: %d\n", *(int *)lst->content);
	if (lst == NULL)
		printf("list is empty");
	return (0);
}
*/
