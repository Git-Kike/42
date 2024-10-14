/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:16:00 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/08 01:34:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/* int main()
{
    printf("%c\n", ft_tolower('a')); // Debería imprimir a
    printf("%c\n", ft_tolower('Z')); // Debería imprimir z
    printf("%c\n", ft_tolower('1')); // Debería imprimir 1
    printf("%c\n", ft_tolower(' ')); // Debería imprimir ' '
    return 0;
} */