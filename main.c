/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:41:01 by jhusso            #+#    #+#             */
/*   Updated: 2023/01/21 17:30:53 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // NULL, exit failure & success
#include <stdio.h>

int push(int *array, int *top, int n)
{
int i = 0;
if(!n)
	write(1, "nothing to add", 15);

else
	while(i++ < 3)
	{
		array[i+1] = array[i]; //here somethhhing shittttt
	}
	array[0] = *top;
	*top = n;
return(1);
}

int main(void)
{
	int array[3];
	int *top = &array[0];
	int i = 0;

	push(array, top, 5);
	push(array, top, 6);
	push(array, top, 7);
	printf("added: %d\n", array[0]); // "added: 7" correct!
	printf("added: %d\n", array[1]); // "added: -357210144"
	printf("added: %d\n", array[2]); // "added: -357210144"

	// while(array[i]++ < 10) //endless loop
	// 	printf("stack %d\n", array[i]);

return(0);
}

