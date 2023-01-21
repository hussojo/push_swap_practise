/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:49:16 by jhusso            #+#    #+#             */
/*   Updated: 2023/01/21 17:01:50 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//implementation of basic stack function

int push(int *top, int n)
{
	if(!n)
		write(1, "nothing to add", 15);
	else
		*top = &n;

}

int pop()
{

}

int peek()
{

}
