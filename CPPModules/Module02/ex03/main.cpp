/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgonza <albgonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:03:00 by albgonza          #+#    #+#             */
/*   Updated: 2023/06/27 23:03:00 by albgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	//Test 1
	// a(0,0)
	// b(0,4)
	// c(4,0)
	// point(1,1)
	Point	a(0, 0);
	Point	b(0, 10);
	Point	c(3, 0);
	Point	point(3, 0);

	std::cout << "a(X: " << a.getX() << ", " << a.getY() << ")" << std::endl;
	std::cout << "b(X: " << b.getX() << ", " << b.getY() << ")" << std::endl;
	std::cout << "c(X: " << c.getX() << ", " << c.getY() << ")" << std::endl;
	std::cout << "point(X: " << point.getX() << ", " << point.getY() << ")" << std::endl;
	if (bsp(a, b, c, point))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;
	return (0);
}
