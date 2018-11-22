/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put2str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 17:32:32 by azaliaus          #+#    #+#             */
/*   Updated: 2018/06/21 17:33:13 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_put2str(char **arr)
{
	if (!arr)
		return ;
	while (*arr)
	{
		ft_putendl(*arr);
		arr++;
	}
}