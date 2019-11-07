#include "CPoint.h"
#include <iostream>
#include <cmath>

//getters/setters
float CPoint::getX()
{
	return this->fltX;
}

void CPoint::setX(float fltX)
{
	this->fltX = fltX;
}

float CPoint::getY()
{
	return this->fltY;
}

void CPoint::setY(float fltY)
{
	this->fltY = fltY;
}

//deplacement
void CPoint::Move(float fltX, float fltY)
{
	this->fltX += fltX;
	this->fltY += fltY;
}

//affiche
void CPoint::Show()
{
	std::cout << "X: " << this->fltX << std::endl;
	std::cout << "Y: " << this->fltY << std::endl;
}

//homothetie
void CPoint::Homothetie(CPoint ptO, float fltK, CPoint ptPoints)
{
	if (fltK > 0) // si k est au dessus de zero
	{
		this->fltX=((ptPoints.getX()+ptO.getX()) * fltX);
		this->fltY= ((ptPoints.getX() + ptO.getX()) * fltX);
	}
	else if (fltK < 0) //si k est en dessous de zero
	{
		this->fltX = ((ptPoints.getX() + ptO.getX()) * (-fltX));
		this->fltY = ((ptPoints.getX() + ptO.getX()) * (-fltX));
	}
}

//rotation
void CPoint::Rotation(float fltAngle)
{
	//Transformation de l'angle
	fltAngle *= 3.141592653589 / 180;
	this->fltX = this->fltX * cos(fltAngle) + this->fltY * sin(fltAngle);
	this->fltY = -this->fltY * sin(fltAngle) + this->fltY * cos(fltAngle);

	//retourne les nouvelles coordonnées du point
	std::cout << "X apres rotation : " << round(this->fltX) << std::endl;
	std::cout << "Y apres rotation : " << round(this->fltY) << std::endl;

}

float CPoint::Carre(float fltX)
{
	return fltX * fltX;
}

float CPoint::Rho(Cpoint pt1)
{
	return sqrt(Carre(this->getX() - pt1.getY()) + Carre(this->getX() - pt1.getY())).
}

float CPoint::Theta(Cpoint ptO)
{
	return
}
