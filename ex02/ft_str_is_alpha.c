/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:38:44 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/07 16:38:45 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((97 <= str[n] && str[n] <= 122) || (65 <= str[n] && str[n] <= 90))
		{
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
