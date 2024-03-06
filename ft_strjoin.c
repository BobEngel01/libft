/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 12:53:12 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 13:00:13 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_string = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s1, s1_len + 1);
	ft_strlcpy(new_string + s1_len, s2, s2_len + 1);
	return (new_string);
}
