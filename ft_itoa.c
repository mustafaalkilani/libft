/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:22:39 by malkilan          #+#    #+#             */
/*   Updated: 2025/08/25 01:53:47 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>

int	get_size(int num)
{
	int	counter;

	counter = 0;
	if (num <= 0)
		counter++;
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

char	*convert(int n, char *str, int len)
{
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		flag;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = get_size(n);
	flag = 1;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		flag = -1;
		str[0] = '-';
		n = -n;
	}
	return (convert(n, str, len));
}
