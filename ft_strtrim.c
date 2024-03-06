/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 15:02:35 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:21:52 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new_string;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i - 1]))
		i--;
	new_string = (char *)malloc(sizeof(char) * (i + 1));
	if (!new_string)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new_string[j] = s1[j];
		j++;
	}
	new_string[j] = '\0';
	return (new_string);
}
