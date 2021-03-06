/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 21:11:48 by azaliaus          #+#    #+#             */
/*   Updated: 2018/05/28 22:38:48 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_floor(float nbr)
{
	int			ret;
	float		calc;

	calc = nbr - (int)nbr;
	calc *= 10;
	ret = (int)calc;
	return (ret >= 5 ? (int)nbr + 1 : (int)nbr);
}

int			ft_floor_up(float nbr)
{
	int			ret;
	float		calc;

	calc = nbr - (int)nbr;
	calc *= 10;
	ret = (int)calc;
	return (ret >= 1 ? (int)nbr + 1 : (int)nbr);
}

int			ft_floor_upp(float nbr)
{
	int			ret;
	float		calc;

	calc = nbr - (int)nbr;
	calc *= 1000000000;
	ret = (int)calc;
	return (ret >= 1 ? (int)nbr + 1 : (int)nbr);
}
