/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malkilan <malkilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:15:59 by malkilan          #+#    #+#             */
/*   Updated: 2025/08/21 14:53:02 by malkilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*ptr;
	size_t	i;

	ptr = malloc(nmemb * size);
	i = 0;
	if (!ptr)
		return (NULL);
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// int main(void)
// {
//     int *ptr;

//     ptr = (int *)ft_calloc(5, sizeof(int));
//     for (int i = 0; i < 5; i++)
//         printf("%d", ptr[i]);
// }