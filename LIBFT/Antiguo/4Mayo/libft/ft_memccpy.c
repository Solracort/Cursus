/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:52:30 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/03 17:48:15 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;
    if(!dst && !src)
        return(0);
        
    i=0;
    while (i<n)
    {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i]; 
        if ((unsigned char)c == ((unsigned char*)src)[i])
            return(dst+i +1);
        i++;    
    }
    return(0);
}