/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:29:19 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/04 13:29:27 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*new_arr;
	int			i;
	int			size;

	i = 0;
	size = ft_strlen(s);
	new_arr = (char *) malloc((size + 1) * sizeof(char));
	if (!new_arr)
		return (NULL);
	ft_memcpy((void *) new_arr, s, size);
	new_arr[size] = '\0';
	return (new_arr);
}
