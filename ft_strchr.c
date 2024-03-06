/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 13:32:09 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:15:47 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	if (character == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char *)s);
	}
	while (*s != character && *s != '\0')
		s++;
	if (*s == '\0')
		return (NULL);
	return ((char *)s);
}
