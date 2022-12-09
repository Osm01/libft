/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:07:38 by ouidriss          #+#    #+#             */
/*   Updated: 2022/10/09 18:01:45 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

unsigned long	ln(char const *str)
{
	unsigned long	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*join;
	unsigned long	ln_s1;
	unsigned long	ln_s2;
	unsigned long	i;
	unsigned long	index;

	i = 0;
	index = 0;
	ln_s1 = ln(s1);
	ln_s2 = ln(s2);
	join = malloc(sizeof(char) * (ln_s1 + ln_s2 + 1));
	if (join == NULL)
		return (0);
	while (index < ln_s1)
	{
		*(join + i++) = *(char *)(s1 + index++);
	}
	index = 0;
	while (index < ln_s2)
	{
		*(join + i++) = *(char *)(s2 + index++);
	}
	*(join + i) = '\0';
	return (join);
}
