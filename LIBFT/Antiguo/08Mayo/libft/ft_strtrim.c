/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 08:44:41 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/08 11:28:24 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Parámetros s: La string desde la que crear la substring.start: El índice del caracter en ’s’ desde el que
empezar la substring.len: La longitud máxima de la substring.
Valor devuelto: La substring resultante.NULL si falla la reserva de memoria.
Funciones autori- zadas:malloc
Descripción: Reserva (con malloc(3)) y devuelve una substring dela string ’s’.La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cad;
    size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != 0 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
		i--;
	cad = ft_substr(s1, 0, i + 1);
	return (cad);
}	
/*
int	main(void)
{
	char *cad1;
    char *busc;
    
    cad1 = "pelota";
    busc = "peta";
    printf("%s", ft_strtrim(cad1, busc));
    return(0);
}*/