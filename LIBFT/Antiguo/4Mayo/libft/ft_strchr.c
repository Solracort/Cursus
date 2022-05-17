/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 08:28:18 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/01 10:20:26 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*tmp;

	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	cad1[] = "hola";

	printf("la cadena es %s y devuelve %s\n", cad1, ft_strchr(cad1,'\0'));
	return (0);
}*/
