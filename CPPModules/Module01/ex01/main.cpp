/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:01:25 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/20 23:01:25 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* horde;

	horde = Zombie::zombieHorde(10, "Jack");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}