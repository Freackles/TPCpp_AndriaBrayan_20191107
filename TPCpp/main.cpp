#include <iostream>
#include "CPoint.h"
#include<cmath>

int main()
{
	//exo 1 
	CPoint ptPoint;

	ptPoint.setX(5);
	ptPoint.setY(6);
	ptPoint.Show();

	ptPoint.Move(2, 3);
	ptPoint.Show();

	//exo 2

	std::cout << "X: " << ptPoint.getX() << std::endl;
	std::cout << "Y: " << ptPoint.getY() << std::endl;

	//exo 3

	
	return 0;
}