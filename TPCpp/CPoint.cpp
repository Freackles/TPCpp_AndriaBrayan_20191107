#include "CPoint.h"
#include <iostream>

//getters/setters
float CPoint::getX()
{
	return this->nX;
}

void CPoint::setX(float nX)
{
	this->nX = nX;
}

float CPoint::getY()
{
	return this->nY;
}

void CPoint::setY(float nY)
{
	this->nY = nY;
}

//deplacement
void CPoint::Move(float nX, float nY)
{
	this->nX += nX;
	this->nY += nY;
}

//affiche
void CPoint::Show()
{
	std::cout << "X: " << this->nX << std::endl;
	std::cout << "Y: " << this->nY << std::endl;
}
