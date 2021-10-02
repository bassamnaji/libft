/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:30:22 by bnaji             #+#    #+#             */
/*   Updated: 2021/09/29 10:24:00 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32);
    else
        return (c);
}
