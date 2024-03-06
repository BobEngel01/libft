/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 16:16:12 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:16:10 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;

	string1 = (const unsigned char *)s1;
	string2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*string1 == *string2 && n > 1)
	{
		string1++;
		string2++;
		n--;
	}
	return (*string1 - *string2);
}
