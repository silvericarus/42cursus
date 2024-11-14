/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:15:58 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/28 17:15:58 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	return ;
}

Point::Point(const Point &point) : _x(point._x), _y(point._y)
{
	return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	return ;
}

Point::~Point()
{
	return ;
}

Point	&Point::operator=(const Point &point)
{
	(void)point;
	return (*this);
}

std::ostream	&operator<<( std::ostream &ostream, Point const &point )
{
	ostream << "(" << point.getX() << ", " << point.getY() << ")";
	return ostream;
}

bool	Point::operator==(const Point &point) const
{
	return (this->_x == point._x && this->_y == point._y);
}

bool	Point::operator!=(const Point &point) const
{
	return (this->_x != point._x || this->_y != point._y);
}

float	Point::getX() const
{
	return (this->_x.toFloat());
}

float	Point::getY() const
{
	return (this->_y.toFloat());
}
