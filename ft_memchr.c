/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 15:43:14 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:16:13 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*string;
	unsigned char		character;

	string = (const unsigned char *)s;
	character = (unsigned char)c;
	while (n > 0)
	{
		if (*string == character)
			return ((void *)string);
		string++;
		n--;
	}
	return (NULL);
}
