/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concat_str.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcordova <jcordova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 19:04:16 by jcordova          #+#    #+#             */
/*   Updated: 2022/04/17 19:14:03 by jcordova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "str_length.h"

#ifndef CONCAT_STR
#define CONCAT_STR

char	*concat_str(char *str1, char *str2)
{
	unsigned int	str1_size;
	unsigned int	str2_size;
	unsigned int	c;
	char	*res;

	str1_size = str_length(str1);
	str2_size = str_length(str2);
	res = (char*)malloc((str1_size + str2_size + 1) * sizeof(char));
	c = 0;
	while (*str1 != '\0')
	{
		res[c] = *str1;
		str1++;
		c++;
	}
	while (*str2 != '\0')
	{
		res[c] = *str2;
		str2++;
		c++;
	}
	res[c] = '\0';
	return (res);
}
#endif
