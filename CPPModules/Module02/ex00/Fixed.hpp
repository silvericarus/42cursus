/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:03:15 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/27 23:03:15 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class	Fixed
{
	private:
		int	_fixedPointValue;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed	&operator=(const Fixed &fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif