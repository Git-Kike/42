/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_black_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:13:37 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 12:13:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*int main()
{
	t_list *list = ft_lstnew("Hello");
	t_list *new = ft_lstnew("World");
	ft_lstadd_back(&list, new);
	printf("%s\n", (char *)ft_lstlast(list)->content); // Debería imprimir World
	return 0;
}*/