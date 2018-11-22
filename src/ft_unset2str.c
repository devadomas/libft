/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unset2str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 14:09:27 by azaliaus          #+#    #+#             */
/*   Updated: 2018/05/07 14:41:58 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_unset2str(char ***str)
{
	char	**cpy;

	cpy = *str;
	while (*cpy)
	{
		free(*cpy);
		cpy++;
	}
	free(*str);
	str = NULL;
}
