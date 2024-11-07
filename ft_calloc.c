/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:56:31 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/07 17:23:49 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pnt;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > (size_t) - 1 /size)
		return (NULL);
	pnt = malloc(nmemb * size);
	if (!pnt)
		return (NULL);
	while (i < nmemb * size)
	{
		((unsigned char *) pnt)[i] = '\0';
		i++;
	}
	return (pnt);
}
