/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:12:16 by eolivero          #+#    #+#             */
/*   Updated: 2024/09/18 13:12:37 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/* int main()
{
	printf("%d\n", ft_isalpha('a')); // Debería imprimir 1
	printf("%d\n", ft_isalpha('Z')); // Debería imprimir 1
	printf("%d\n", ft_isalpha('1')); // Debería imprimir 0
	printf("%d\n", ft_isalpha(' ')); // Debería imprimir 0
	return 0;
} */
