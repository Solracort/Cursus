/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:37:23 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/03 18:37:24 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c){
	if (c>= 'a' && c<='z')
	       return( c - 32);
	else
		return(c);
}
/*
#include<stdio.h>
int main(void){
	int x = 'r';
	printf("Caracter inicial %i\n", x);

	printf("Caracter transformado %i\n", ft_toupper(x));
	x= 125; 			
	printf("Caracter transformado 125: %i\n", ft_toupper(x));
	x='\0';
	printf("Caracter transformado vacio: %i\n", ft_toupper(x));
}*/
