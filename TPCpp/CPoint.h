#pragma once
class CPoint
{
	//membres
private:
	float nX;
	float nY;

	
public:
	//prototype getter/setter
	float getX();
	void setX(float nX);

	float getY();
	void setY(float nY);

	//prototypes 
	//deplacement
	void Move(float nX, float nY);
	void Show();
	
};

