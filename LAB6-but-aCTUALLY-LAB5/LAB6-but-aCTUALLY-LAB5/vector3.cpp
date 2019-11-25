#include "vector3.h"

// Constructor 1
vector3::vector3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

// Constructor 2
vector3::vector3(float x1, float y1, float z1)
{ // To allow other values for X, Y and Z to be declared
	x = x1;
	y = y1;
	z = z1;
}
// Constructor 3
vector3::vector3(vector3& V)
{  // To allow other values for X, Y and Z to be declared
	x = V.x;
	y = V.y;
	z = V.z;
}

float vector3::getZ()
{
	return z;
}
void vector3::setZ(float t_z)
{
	z = t_z;
}





float vector3::Length()
{  // A method to return the length of the vector
	return sqrt(x * x + y * y + z * z);
}
float vector3::LengthSquared()
{  // A method to return the length squared of the vector
	return (x * x + y * y + z * z);
}

void vector3::Normalise()
{  // A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (Length() > 0.0)
	{  // Check for divide by zero
		float magnit = Length();
		x /= magnit;
		y /= magnit;
		z /= magnit;
	}
}




vector3 vector3::operator +(vector3 V1, vector3 V2)
{  // An overloaded operator + to return the sum of 2 vectors
	return   { V1.x + V2.x, V1.y + V2.y, V1.z + V2.z };
}

vector3 vector3::operator -(vector3 V1, vector3 V2)
{ // An overloaded operator - to return the difference of 2 vectors
	return  { V1.x - V2.x, V1.y - V2.y, V1.z - V2.z };
}

 vector3 vector3::operator -(vector3 V)
{// An overloaded operator - to return the negation of a single vector
	 vector3 V1 = { };
	V1.x = -V.x;
	V1.y = -V.y;
	V1.z = -V.z;
	return V1;
}

 float vector3::operator *(vector3 V1, vector3 V2)
{// An overloaded operator * to return the scalar product of 2 vectors
	return (V1.x * V2.x + V1.y * V2.y + V1.z * V2.z);
}

 vector3 vector3::operator *(float k, vector3 V1)
{// An overloaded operator * to return the product of a scalar by a vector
	 return { V1.x * k, V1.y * k, V1.z * k };
}

 vector3 vector3::operator *(float k, vector3 V1)
 {// An overloaded operator * to return the product of a scalar by a vector
	 return {V1.x * k, V1.y * k, V1.z * k };
}

 vector3 vector3::operator *(int k, vector3 V1)
{// An overloaded operator * to return the product of a scalar by a vector
	 return  { V1.x * k, V1.y * k, V1.z * k };
}

 vector3 vector3::operator ^(vector3 V1, vector3 V2)
{// An overloaded operator ^ to return the vector product of 2 vectors
	 return { V1.y * V2.z - V1.z * V2.y, V1.z * V2.x - V1.x * V2.z, V1.x * V2.y - V1.y * V2.x };
}

std::string vector3::ToString()
{
	return "(" + std::to_string(x) + "g3" + "," + std::to_string(y) + "g3" + "," + std::to_string(z) + "g3" + ")";
}
float vector3::getX()
{
	return x;
}
void vector3::setX(float t_x)
{
	x = t_x;
}

float vector3::getY()
{
	return y;
}
void vector3::setY(float t_y)
{
	y = t_y;
}