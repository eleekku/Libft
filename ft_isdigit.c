/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalmela <esalmela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:04:14 by esalmela          #+#    #+#             */
/*   Updated: 2023/10/24 14:50:34 by esalmela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int argument)
{
	if (argument > 47 && argument < 58)
		return (argument);
	else
		return (0);
}
