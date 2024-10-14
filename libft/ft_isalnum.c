/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:53:30 by marvin            #+#    #+#             */
/*   Updated: 2024/09/17 17:53:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/* int main()
{
	printf("%d\n", ft_isalnum('a')); // Debería imprimir 1
	printf("%d\n", ft_isalnum('Z')); // Debería imprimir 1
	printf("%d\n", ft_isalnum('1')); // Debería imprimir 1
	printf("%d\n", ft_isalnum(' ')); // Debería imprimir 0
	return 0;
} */