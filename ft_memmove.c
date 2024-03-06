/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 14:27:46 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:16:01 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*destination;
	size_t				i;

	destination = (unsigned char *)dest;
	source = (const unsigned char *)src;
	i = 0;
	if (destination < source)
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else if (destination > source)
	{
		while (n > i)
		{
			destination[n - 1] = source[n - 1];
			n--;
		}
	}
	return (dest);
}
