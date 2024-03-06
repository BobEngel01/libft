/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 12:08:46 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 12:16:49 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	totalsize;
	void	*memory;
	char	*make_empty;

	if (nmemb > 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	totalsize = nmemb * size;
	memory = malloc(totalsize);
	if (memory != NULL)
	{
		i = 0;
		make_empty = (char *)memory;
		while (i < totalsize)
		{
			make_empty[i] = '\0';
			i++;
		}
	}
	return (memory);
}
