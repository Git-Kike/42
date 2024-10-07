/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:20:28 by eolivero          #+#    #+#             */
/*   Updated: 2024/10/08 00:34:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/* int main() {
    printf("%d\n", ft_atoi("   +42"));      // Debería imprimir 42
    printf("%d\n", ft_atoi("   -42"));      // Debería imprimir -42
    printf("%d\n", ft_atoi("   42"));       // Debería imprimir 42
    printf("%d\n", ft_atoi("   +   42"));   // Debería imprimir 0
    printf("%d\n", ft_atoi(NULL));           // Debería imprimir 0
    printf("%d\n", ft_atoi("   +0"));        // Debería imprimir 0
    return 0;
} */