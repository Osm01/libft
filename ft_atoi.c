/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:33:29 by ouidriss          #+#    #+#             */
/*   Updated: 2022/10/08 15:45:08 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	value;
	int	signe;
	int	i;

	value = 0;
	signe = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
			break ;
		if (str[i] == '-' || str[i] == '+')
			break ;
		i ++;
	}
	if (str[i] == '-')
		signe *= -1;
	i ++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + str[i] - '0';
		i ++;
	}
	return (signe * value);
}
