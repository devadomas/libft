/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 11:18:37 by azaliaus          #+#    #+#             */
/*   Updated: 2018/04/05 11:20:41 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*ptr;

	if (!alst || !del)
		return ;
	ptr = *alst;
	(*del)(ptr->content, ptr->content_size);
	free(ptr);
	*alst = NULL;
}
