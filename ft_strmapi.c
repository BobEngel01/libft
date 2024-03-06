/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 15:25:21 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:15:19 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char	*string;
	int		i;

	i = 0;
	string = malloc(ft_strlen(s) + 1);
	if (string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	i = 0;
	while (string[i] != '\0')
	{
		string[i] = f(i, string[i]);
		i++;
	}
	return (string);
}
