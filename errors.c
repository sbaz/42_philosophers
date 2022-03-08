/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <pceccoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:16:47 by pceccoli          #+#    #+#             */
/*   Updated: 2022/03/08 10:16:49 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	ft_err(char *err)
{
	if (err = ERR_ARG)
		ft_putstr(ERR_ARG);
	return (-1);
}