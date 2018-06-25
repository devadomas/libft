/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:14:44 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/25 14:42:48 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		**ft_strarr_del(char **arr, int index)
{
	char		**ret;
	size_t		len;
	int			i;
	int			j;

	if (!arr)
		return (NULL);
	len = ft_str2len(arr);
	if (!(ret = (char **)malloc(sizeof(char *) * len)))
		return (NULL);
	ret[len - 1] = NULL;
	i = 0;
	j = 0;
	while (j < (int)len)
	{
		if (j != index)
			ret[i++] = arr[j];
		else
			ft_strdel(&arr[j]);
		j++;
	}
	free(arr);
	return (ret);
}
