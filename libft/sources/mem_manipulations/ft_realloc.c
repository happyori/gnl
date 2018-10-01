/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 15:34:24 by otahirov          #+#    #+#             */
/*   Updated: 2018/09/27 16:50:21 by otahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void **data, size_t data_size, size_t new_size)
{
	void	*tmp;
	void	*new_data;

	if (data_size == new_size)
		return (*data);
	tmp = ft_memalloc(data_size);
	tmp = ft_memcpy(tmp, *data, data_size);
	ft_memdel(data);
	new_data = ft_memalloc(new_size);
	new_data = ft_memcpy(new_data, tmp, data_size);
	ft_memdel(&tmp);
	return (new_data);
}