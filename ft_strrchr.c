/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 14:40:15 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:15:10 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	character;

	i = 0;
	character = (unsigned char)c;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (*s != character && i > 0)
	{
		s--;
		i--;
	}
	if (*s == character)
		return ((char *)s);
	return (NULL);
}
