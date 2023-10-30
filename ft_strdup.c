/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecayir < cecayir@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 06:08:31 by cecayir           #+#    #+#             */
/*   Updated: 2023/10/27 07:01:28 by cecayir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*final;
	int		i;

	i = 0;
	final = (char *)malloc(ft_strlen(s) + 1);
	if (!final)
		return (0);
	while (*(s + i))
	{
		*(final + i) = *(s + i);
		i++;
	}
	*(final + i) = 0;
	return (final);
}
