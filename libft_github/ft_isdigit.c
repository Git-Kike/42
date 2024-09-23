/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:55:45 by eolivero          #+#    #+#             */
/*   Updated: 2024/09/17 15:03:53 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

int	ft_isnumber(int c)
{
	if ((c >= 0 && c <= 9))
		return (1);
	return (0);
}
/* int main()
{
	char c = 'a';
	printf("%d\n", ft_isnumber(c));
	return 0;
} */