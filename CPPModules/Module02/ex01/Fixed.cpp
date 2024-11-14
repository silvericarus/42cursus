/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:03:25 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/27 23:03:25 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
	return ;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = integer << _fractionalBits;
	return ;
}

Fixed::Fixed(const float floating)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(floating * (1 << _fractionalBits));
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixedPointValue = fixed.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream, Fixed const &fixed)
{
	ostream << fixed.toFloat();
	return ostream;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractionalBits);
}
