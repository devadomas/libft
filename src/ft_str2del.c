/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:39:33 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/22 15:23:11 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_str2del(char ***arr)
{
	char	**cpy;

	if (!arr || !(*arr))
		return ;
	cpy = *arr;
	while (*cpy)
	{
		ft_strdel(&(*cpy));
		cpy++;
	}
	free(*arr);
	*arr = NULL;
}
