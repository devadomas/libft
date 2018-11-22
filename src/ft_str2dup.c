/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 13:19:40 by azaliaus          #+#    #+#             */
/*   Updated: 2018/05/07 13:31:06 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	multidim_len(char **arr)
{
	size_t		len;

	len = 0;
	while (*(arr++))
		len++;
	return (len);
}

char			**ft_str2dup(char **arr)
{
	char	**ret;
	size_t	len;

	if (!arr)
		return (NULL);
	len = multidim_len(arr);
	if (!(ret = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	len = 0;
	while (*arr)
	{
		ret[len] = ft_strdup(*arr);
		if (ret[len])
			len++;
		arr++;
	}
	ret[len] = NULL;
	return (ret);
}
