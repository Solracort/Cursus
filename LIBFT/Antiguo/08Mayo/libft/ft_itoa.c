/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cortiz-s <cortiz-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:20:57 by cortiz-s          #+#    #+#             */
/*   Updated: 2022/05/08 11:21:02 by cortiz-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_size(int n);

char	*ft_itoa(int n)
{
	char	*num;
	size_t	size;
	long	long_n;

	size = ft_num_size(n);
	num = malloc(size + 1);
	if (!num)
		return (NULL);
	num[size--] = 0;
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		long_n = -(long)n;
		num[0] = '-';
	}
	else
		long_n = n;
	while (long_n > 0)
	{
		num[size--] = (long_n % 10) + 48;
		long_n = long_n / 10;
	}
	return (num);
}

static size_t	ft_num_size(int n)
{
	size_t	i;
	size_t	n_pos;

	i = 0;
	if (n <= 0)
	{
		n_pos = -(size_t)n;
		i++;
	}
	else
		n_pos = n;
	while (n_pos > 0)
	{
		n_pos = n_pos / 10;
		i++;
	}
	return (i);
}