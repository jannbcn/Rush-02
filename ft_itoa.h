/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcordova <jcordova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:12:37 by jcordova          #+#    #+#             */
/*   Updated: 2022/04/17 19:30:27 by jcordova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	length(long nb)
{
	int	length;

	length = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		length++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int nb)
{
	char *str;
	long n;
	int i;

	n = nb;
	i = length(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}
