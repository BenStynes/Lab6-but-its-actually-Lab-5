#pragma once
#include <iostream>
#include<math.h>
#include <string>
#include<cmath>

		class vector3
		{
			// The class has three variables x, y and z 
			float x;
			float y;
			float z;
			float getX();
			void setX(float t_x);
			vector3();

			vector3(float x1, float y1, float z1);

			vector3(vector3& V);
			
			 
			float getY();
			void setY(float t_y);

			float getZ();
			void setZ(float t_z);

			float Length();

			float LengthSquared();

			void Normalise();

			static vector3 operator+(vector3 V1, vector3 V2);

			static vector3 operator-(vector3 V1, vector3 V2);

			static vector3 operator-(vector3 V);

			static float operator*(vector3 V1, vector3 V2);

			static vector3 operator*(float k, vector3 V1);

			static vector3 operator*(int k, vector3 V1);

			static vector3 operator^(vector3 V1, vector3 V2);

			std::string ToString();

		

			

		};
	
	
