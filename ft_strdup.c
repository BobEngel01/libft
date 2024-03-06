/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/13 11:37:33 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:15:43 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	j;
	char	*duplicate;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	duplicate = malloc((i + 1) * sizeof(char));
	if (duplicate != NULL)
	{
		while (s[j] != '\0' && j < i)
		{
			duplicate[j] = s[j];
			j++;
		}
		duplicate[j] = '\0';
		return (duplicate);
	}
	return (NULL);
}
