/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:36:25 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/03 18:36:26 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void){

	char	cad1[]="perola";
	char	cad2[]="pasta";
	int	n= 5; 
	printf("Cadena 1: %s\n Cadena 2: %s\n Caracteres comparados: %d Resultado:
			%i\n", cad1, cad2, n, ft_strncmp(cad1,cad2,n));


	return(0);
}
*/