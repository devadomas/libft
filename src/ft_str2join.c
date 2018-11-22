/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:27:43 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/22 13:29:18 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			**ft_str2join(char **arr1, char **arr2)
{
	char		**ret;
	size_t		s1;
	size_t		s2;
	int			i;

	s1 = ft_str2len(arr1);
	s2 = ft_str2len(arr2);
	if (!(ret = (char **)malloc(sizeof(char *) * (s1 + s2 + 1))))
		return (NULL);
	ret[s1 + s2] = NULL;
	i = 0;
	if (arr1)
		while (*arr1)
			ret[i++] = ft_strdup(*(arr1++));
	if (arr2)
		while (*arr2)
			ret[i++] = ft_strdup(*(arr2++));
	return (ret);
}
