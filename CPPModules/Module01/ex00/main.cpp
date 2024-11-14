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
	Zombie	*zombie;

	zombie = Zombie::newZombie("Zombie1");
	zombie->announce();
	delete zombie;
	Zombie::randomChump("Zombie2");
	return (0);
}