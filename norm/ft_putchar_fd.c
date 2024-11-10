/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zakariaajaddou@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 05:44:26 by zajaddou          #+#    #+#             */
/*   Updated: 2024/11/10 00:09:46 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	s;

	if (fd < 0)
	{
		write(2,"-1",2);
		return ;
	}
	s = (unsigned char)c;
	write(fd, &s, 1);
}
int main()
{
    //close(1);
	ft_putchar_fd('f', 1);
}