/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:02:20 by marvin            #+#    #+#             */
/*   Updated: 2024/09/17 18:02:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/* int main()
{
	printf("%d\n", ft_isascii('a')); // Debería imprimir 1
	printf("%d\n", ft_isascii('Z')); // Debería imprimir 1
	printf("%d\n", ft_isascii('1')); // Debería imprimir 1
	printf("%d\n", ft_isascii(' ')); // Debería imprimir 1
	printf("%d\n", ft_isascii(128)); // Debería imprimir 0
	return 0;
} */