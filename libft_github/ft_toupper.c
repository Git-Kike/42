/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:30:29 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/08 01:31:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/* int main()
{
    printf("%c\n", ft_toupper('a')); // Debería imprimir A
    printf("%c\n", ft_toupper('Z')); // Debería imprimir Z
    printf("%c\n", ft_toupper('1')); // Debería imprimir 1
    printf("%c\n", ft_toupper(' ')); // Debería imprimir ' '
    return 0;
} */