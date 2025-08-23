/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malkilan <malkilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:48:13 by malkilan          #+#    #+#             */
/*   Updated: 2025/08/23 14:21:47 by malkilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_array_size(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	int		count;
	char	**array;

	count = get_array_size(s, c);
	array = malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i < count)
	{
		while (s[j] && s[j] == c)
			j++;
		len = 0;
		while (s[j + len] && s[j + len] != c)
			len++;
		array[i] = ft_substr(s, j, len);
		j += len;
		i++;
	}
	array[i] = NULL;
	return (array);
}
