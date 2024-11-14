/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:47:03 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/21 20:40:15 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	*weapon;
		std::string	name;
	public:
		HumanA(std::string, Weapon &);
		~HumanA();
		void	attack(void);
};
#endif