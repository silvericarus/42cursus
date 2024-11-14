/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 22:53:36 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/20 22:53:36 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>
class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void	setName(std::string name);
		void	announce(void);
		static Zombie* zombieHorde( int N, std::string name );
};
#endif
