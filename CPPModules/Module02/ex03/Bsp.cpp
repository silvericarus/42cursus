/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:18:40 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/28 17:18:40 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Fixed	calcArea(Point const a, Point const b, Point const c)
{
	Fixed	area;

	area = ((a.getX() * (b.getY() - c.getY())) +
			(b.getX() * (c.getY() - a.getY())) +
			(c.getX() * (a.getY() - b.getY()))) / 2;
	area = Fixed::abs(area);
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abcArea;
	Fixed	pabArea;
	Fixed	pbcArea;
	Fixed	pcaArea;
	Fixed	totalArea;

	abcArea = calcArea(a, b, c);
	std::cout << "abcArea: " << abcArea.toFloat() << std::endl;
	pabArea = calcArea(point, a, b);
	std::cout << "pabArea: " << pabArea.toFloat() << std::endl;
	pbcArea = calcArea(point, b, c);
	std::cout << "pbcArea: " << pbcArea.toFloat() << std::endl;
	pcaArea = calcArea(point, c, a);
	std::cout << "pcaArea: " << pcaArea.toFloat() << std::endl;
	totalArea = pabArea + pbcArea + pcaArea;
	std::cout << "totalArea: " << totalArea.toFloat() << std::endl;
	if (abcArea == totalArea && (pabArea != 0 && pbcArea != 0 && pcaArea != 0))
		return (true);
	else
		return (false);
}
