/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:45:42 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/21 20:33:30 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string);
		~Weapon();
		const std::string&	getType();
		void	setType(std::string);
};
#endif