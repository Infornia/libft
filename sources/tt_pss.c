/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_pss.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 18:31:16 by mwilk             #+#    #+#             */
/*   Updated: 2016/05/19 18:31:39 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		tt_pss(char *s, char *s2)
{
	write(1, s, tt_slen(s));
	write(1, s2, tt_slen(s));
	return (1);
}
