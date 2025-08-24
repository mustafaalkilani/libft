/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:22:39 by malkilan          #+#    #+#             */
/*   Updated: 2025/08/24 03:42:15 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>

int	get_size(int num)
{
	int	counter;

	counter = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = -1 * num;
		counter++;
	}
	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

char	*convert(int n, int flag, char *str, int i)
{
	int	len;

	len = get_size(n);
	while ((n * flag) > 0)
	{
		str[len - 1] = ((flag * n) % 10) + '0';
		n /= 10;
		len--;
		i++;
	}
	str[i + 1] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	int		flag;
	char	*str;

	len = get_size(n);
	i = 0;
	flag = 1;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		flag = -1;
		str[0] = '-';
	}
	if (n == 0)
	{
		str[len - 1] = '0';
		i++;
	}
	return (convert(n, flag, str, i));
}
