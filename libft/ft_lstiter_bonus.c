/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:00:47 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 13:00:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*int main()
{
	t_list *list = ft_lstnew("Hello");
	t_list *new = ft_lstnew("World");
	ft_lstadd_front(&list, new);
	ft_lstiter(list, &ft_putstr_fd);
	return 0;
}*/