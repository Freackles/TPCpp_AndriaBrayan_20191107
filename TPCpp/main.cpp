#include <iostream>
#include "CPoint.h"

int main()
{
	CPoint ptPoint;

	ptPoint.setX(5);
	ptPoint.setY(6);

	ptPoint.Move(2, 3);

	ptPoint.Show();
	return 0;
}