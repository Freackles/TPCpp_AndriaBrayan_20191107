#pragma once
class CPoint
{
	//membres
private:
	float fltX;
	float fltY;

	
public:
	//prototype getter/setter
	float getX();
	void setX(float fltX);

	float getY();
	void setY(float fltY);

	//prototypes 
	//deplacement
	void Move(float fltX, float fltY);

	//affichage
	void Show();

	//homothetie
	void Homothetie(CPoint ptO, float fltK, CPoint ptPoints);

	//rotation
	void Rotation(float fltAngle);

	float Carre(float fltX);

	//rho et theta
	float Rho(Cpoint ptO);
	float Theta(Cpoint ptO);
	
};

