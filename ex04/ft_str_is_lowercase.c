/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:00:14 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/07 17:00:15 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (97 <= str[n] && str[n] <= 122)
			n++;
		else
			return (0);
	}
	return (1);
}
