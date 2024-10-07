/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:42:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 21:42:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)

{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}

/* int main(void)
{
	char *s = "Hello";
	ft_putstr_fd(s, 1);
	return 0;
} */