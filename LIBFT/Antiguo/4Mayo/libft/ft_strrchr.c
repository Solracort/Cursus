/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:36:59 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/04 20:12:33 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int		f;
	char	*exit;

	f = ft_strlen(s) - 1;
	exit = (char *)s;
	if (exit[f] == (char)c)
			return (exit + f);
	while (exit[f])
	{
		if (exit[f] == (char)c)
			return (exit + f);
		f--;
	}
	return (NULL);
}
/*char	*strrchr(const char *s, int c){
			int len;
		char *tmp;
		tmp = (char *)s;
		len = strlen(s);
		if (*(tmp + len) == (char)c)
			return (tmp + len);
		while (len--){
			if (*(tmp + len) == (char)c)
			     	return (tmp + len);
		}
		return (NULL);

}
#include <stdio.h>
int	main(void){
	char	word[]= "primero"; 
	char	*second;
	second = ft_strrchr(word,109);
	printf("%s\n",second);
	return(0);
}*/
