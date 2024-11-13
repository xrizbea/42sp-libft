/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatriza <beatriza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:35:31 by beatriza          #+#    #+#             */
/*   Updated: 2024/11/13 14:36:38 by beatriza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *s, char c);
static char	*ft_create_word(char const *str, char c);
static char	**ft_free_split(char **split, int count);

char	**ft_split(char const *str, char c)
{
	char	**dest;
	int	i;

	if	(!str)
		return (NULL);
	i = 0;
	dest = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!dest)
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			dest[i++] = ft_create_word(str, c);
			if (dest[i - 1] == NULL)
				return (ft_free_split(dest, i));
			while (*str && *str != c)
				str++;   
		}
	}
	dest[i] = NULL; 
	return (dest);  
}

static int	count_words(char const *s, char c)

{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}


static char	*ft_create_word(char const *str, char c)
{
	char	*dest;
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_free_split(char **split, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

