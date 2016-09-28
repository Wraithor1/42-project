/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouw <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 12:07:28 by tlouw             #+#    #+#             */
/*   Updated: 2016/05/18 12:36:46 by tlouw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	ft_cntstr(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	*ft_setstr(char const *s, int i, int len, char *str)
{
	int	j;

	j = 0;
	while (j < len)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		len;
	int		index;
	char	**result;

	i = 0;
	index = 0;
	if ((result = (char **)malloc((ft_cntstr(s, c) + 1) * sizeof(char *))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		len = 0;
		while (s[i + len] != c && s[i + len] != '\0')
			len++;
		if (len == 0)
			return (result);
		if ((result[index] = (char *)malloc((len + 1) * sizeof(char))) == NULL)
			return (NULL);
		ft_setstr(s, i, len, result[index]);
		index++;
		i += len;
	}
	result[index] = NULL;
	return (result);
}
