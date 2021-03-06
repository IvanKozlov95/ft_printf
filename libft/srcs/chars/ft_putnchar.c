/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 15:16:30 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/12 16:02:53 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnchar(char c, int n)
{
	char	*s;

	if (n > 0)
	{
		s = ft_strnewc(n, c);
		ft_putstr(s);
		free(s);
	}
}
