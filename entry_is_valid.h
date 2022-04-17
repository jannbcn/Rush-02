/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_is_valid.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcordova <jcordova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:27:57 by jcordova          #+#    #+#             */
/*   Updated: 2022/04/17 18:53:10 by jcordova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_length.h"

#ifndef ENTRY_IS_VALID
#define ENTRY_IS_VALID

int	entry_is_valid(char *str)
{
	if (str[0] == '\0')
	{
		return (0);
	}
	if ((int)str_length(str) > 48)
	{
		return (0);
	}
	return (1);
}
#endif
