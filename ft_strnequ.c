/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroux <guroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:18:42 by guroux            #+#    #+#             */
/*   Updated: 2018/11/09 19:23:39 by guroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO FINISH !
#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (s1[n] != s2[n])
			return (0);
	}
	return (1);
}
