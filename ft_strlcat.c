/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:20:04 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:28:18 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	n = i;
	if (size == 0)
		return (ft_strlen(src));
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (n < size)
		dst[i] = '\0';
	while (src[j])
		j++;
	return (n + j);
}
