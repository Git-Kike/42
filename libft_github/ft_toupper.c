/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eolivero <eolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:30:29 by eolivero          #+#    #+#             */
/*   Updated: 2024/09/25 14:48:52 by eolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/* int main() {
    char test_char1 = 'a';
    char test_char2 = 'Z';
    char test_char3 = '1';

    printf("'%c' -> Convertido: '%c'\n", test_char1, ft_toupper(test_char1));
    printf("'%c' -> Convertido: '%c'\n", test_char2, ft_toupper(test_char2));
    printf("'%c' -> Convertido: '%c'\n", test_char3, ft_toupper(test_char3));

    return 0;
} */