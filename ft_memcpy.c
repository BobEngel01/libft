/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 17:19:52 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:16:06 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destination;
	const char	*source;
	size_t		i;

	destination = (char *)dest;
	source = (const char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		destination[i] = source[i];
		i++;
		n--;
	}
	return (dest);
}
