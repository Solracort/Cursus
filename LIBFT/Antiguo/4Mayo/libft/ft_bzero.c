/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:24:47 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/03 16:08:33 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*pointer;
    if (n != 0)
    {        
	    i = 0;
	    pointer = (char *)s;
	    while (i < n && *pointer)
	    {
		    *pointer = 0;
		    i++;
		    pointer++;
	    }
    }    
}
/*
#include <stdio.h>

int	main(void)
{
	char p1[] = "123ABC";
	printf("El puntero %s el ft_bzero lo transf en: ", p1);
    ft_bzero(p1, 6);
    printf("%s\n", p1);
	return (0);
}
*/    