/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_the_same_str.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcordova <jcordova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:48:29 by jcordova          #+#    #+#             */
/*   Updated: 2022/04/17 18:51:05 by jcordova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_THE_SAME_STR
#define IS_THE_SAME_STR

int	is_the_same_str(char *s1, char *s2)
{
	unsigned int	c;

	c = 0;
	while (s1[c] == s2[c])
	{
		if (s1[c] == '\0')
		{
			return (1);
		}
		c++;
	}
	return (0);
}
#endif
