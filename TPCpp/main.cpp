#include <iostream>
#include "CPoint.h"

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
	
	return 0;
}