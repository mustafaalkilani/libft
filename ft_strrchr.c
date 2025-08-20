/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malkilan <malkilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:05:14 by malkilan          #+#    #+#             */
/*   Updated: 2025/08/12 16:13:05 by malkilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = 0;
	while (str[len] != 0)
		len++;
	while (len >= 0)
	{
		if (str[len] == c)
			return (str + len);
		len--;
	}
	return (0);
}

// int main(void)
// {
//     printf("%s", ft_strrchr("Hello World", 'l'));
//     return (0);
// }
