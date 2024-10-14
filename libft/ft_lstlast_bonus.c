/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:04:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 12:04:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
/*int main()
{
	t_list *list = ft_lstnew("Hello");
	t_list *new = ft_lstnew("World");
	ft_lstadd_front(&list, new);
	printf("%s\n", (char *)ft_lstlast(list)->content); // Debería imprimir World
	return 0;
}
*/