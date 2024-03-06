/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bengel <bengel@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 09:46:03 by bengel        #+#    #+#                 */
/*   Updated: 2023/10/29 16:06:33 by bengel        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = 1;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*create_string(int len, long nb, int is_negative)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- > is_negative)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	int		is_negative;

	if (n == 0)
		return (create_string(1, 0, 0));
	len = get_len(n);
	nb = n;
	is_negative = 0;
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb;
		len++;
	}
	return (create_string(len, nb, is_negative));
}
