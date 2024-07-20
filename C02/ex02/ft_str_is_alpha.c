/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:43:49 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/18 12:41:50 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	bool	alpha;

	alpha = true;
	i = 0;
	while (str[i] != '\0' && alpha == true)
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
			alpha = false;
		i++;
	}
	if (alpha == true)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main(void)
{
	char c[100];
	printf("Enter a word:\n");
	scanf("%s", c);
	bool alpha = ft_str_is_alpha(c);
	if (alpha == true)
	{
		printf("Congrats! You only used alphabetical symbols!");
	}
	else
	{
		printf("Congrats! You used non-alphabetical symbols!");
	}
	return (0);
}
*/
