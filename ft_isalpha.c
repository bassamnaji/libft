/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:34:16 by bnaji             #+#    #+#             */
/*   Updated: 2021/09/29 16:37:46 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalpha (int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
		return(1);
	else 
		return(0);
}