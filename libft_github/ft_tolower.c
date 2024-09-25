/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:16:00 by eolivero          #+#    #+#             */
/*   Updated: 2024/09/25 14:27:53 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/* int main() {
    char test_char1 = 'a';
    char test_char2 = 'Z';
    char test_char3 = '1';

    printf("'%c' -> Convertido: '%c'\n", test_char1, ft_tolower(test_char1));
    printf("'%c' -> Convertido: '%c'\n", test_char2, ft_tolower(test_char2));
    printf("'%c' -> Convertido: '%c'\n", test_char3, ft_tolower(test_char3));

    return 0;
} */