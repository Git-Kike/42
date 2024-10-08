/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:35:53 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 11:35:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main()
{
	t_list *list = ft_lstnew("Hello");
	t_list *new = ft_lstnew("World");
	ft_lstadd_front(&list, new);
	printf("%s\n", (char *)list->content); // Debería imprimir World
	return 0;
}
*/