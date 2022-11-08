/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hez-zahi <hez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:42:30 by hez-zahi          #+#    #+#             */
/*   Updated: 2022/11/04 17:39:32 by hez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_caze(long n)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	if (n == 0)
		return (t + 1);
	if (n > 0)
	{
		while (n % 10 != 0 || (n % 10 == 0 && n / 10 != 0))
		{
			n = n / 10;
			t++;
		}
	}
	else
		return (ft_caze (-1 * n) + 1);
	return (t);
}

char	*ft_change(char *p)
{
	int		i;
	int		j;
	int		ted;
	char	t;

	j = ft_strlen (p);
	ted = j / 2;
	i = 0;
	while (i < ted)
	{
		t = *(p + ((j - i) - 1));
		*(p + ((j - i) - 1)) = *(p + i);
		*(p + i) = t;
		i++;
	}
	return (p);
}

char	*ft_cass(long n)
{
	int		i;
	char	*p;

	p = (char *)malloc((ft_caze(n) + 1) * sizeof(char));
	i = 0;
	if (n == 0)
	{
		p[i] = '0';
		i++;
	}
	while (n % 10 != 0 || (n % 10 == 0 && n / 10 != 0))
	{
		p[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	p[i] = '\0';
	p = ft_change (p);
	return (p);
}

char	*ft_call(long n)
{
	int		i;
	int		j;
	char	*p;
	char	*m;

	if (n >= 0)
		return (ft_cass (n));
	else
	{
		p = ft_call (-1 * n);
		m = (char *)malloc((ft_strlen(p) + 2) * sizeof(char));
		i = 0;
		*(m + i) = '-';
		i++;
		j = 0;
		while (*(p + j) != '\0')
		{
			*(m + i) = *(p + j);
			j++;
			i++;
		}
		*(m + i) = '\0';
		free (p);
		return (m);
	}
}

char	*ft_itoa(int n)
{
	char	*p;

	p = ft_call (n);
	return (p);
}
