/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:50:25 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/08 11:54:14 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapi;
	unsigned int	i;

	mapi = malloc(ft_strlen(s) + 1);
	if (!mapi || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		mapi[i] = f(i, *s);
		i++;
		s++;
	}
	mapi[i] = 0;
	return (mapi);
}
