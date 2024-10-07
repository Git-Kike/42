/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:05:08 by marvin            #+#    #+#             */
/*   Updated: 2024/09/17 18:05:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/* int main()
{
	printf("%d\n", ft_isprint('a')); // Debería imprimir 1
	printf("%d\n", ft_isprint('Z')); // Debería imprimir 1
	printf("%d\n", ft_isprint('1')); // Debería imprimir 1
	printf("%d\n", ft_isprint(' ')); // Debería imprimir 1
	printf("%d\n", ft_isprint(31)); // Debería imprimir 0
	return 0;
} */