/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 09:24:53 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 09:50:36 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	len_src;

	if (!dst || !src)
		return (0);
	i = 0;
	len_src = ft_strlen(src);
	if (dstsize == 0 || !dst)
		return ((size_t)len_src);
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)len_src);
}
