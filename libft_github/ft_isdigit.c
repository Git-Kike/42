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

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/* int main()
{
	printf("%d\n", ft_isdigit('a')); // Debería imprimir 0
	printf("%d\n", ft_isdigit('Z')); // Debería imprimir 0
	printf("%d\n", ft_isdigit('1')); // Debería imprimir 1
	printf("%d\n", ft_isdigit(' ')); // Debería imprimir 0
	return 0;
} */