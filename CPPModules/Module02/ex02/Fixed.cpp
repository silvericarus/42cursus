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

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (_fixedPointValue > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (_fixedPointValue < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (_fixedPointValue >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (_fixedPointValue <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (_fixedPointValue == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return (_fixedPointValue != fixed.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(toFloat() / fixed.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	_fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++(*this);
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	_fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--(*this);
	return (tmp);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

Fixed	&min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

Fixed	&max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}
