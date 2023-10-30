/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecayir < cecayir@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 05:47:53 by cecayir           #+#    #+#             */
/*   Updated: 2023/10/27 06:58:47 by cecayir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*u;

	u = malloc(count * size);
	if (u == 0)
		return (0);
	ft_bzero(u, count * size);
	return (u);
}
