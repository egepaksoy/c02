/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:00:45 by epaksoy           #+#    #+#             */
/*   Updated: 2023/02/07 17:00:46 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (97 <= str[n] && str[n] <= 122)
			str[n] -= 32;
		n++;
	}
	return (str);
}
