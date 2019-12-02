#pragma once
#include  <cstring>
#include <iostream>
#include "vector3.h"
class Quaternion
{
			 float
				 x, y, z, w;

			 Quaternion()
			{
				w = 0; x = 0; y = 0; z = 0;
			}
			 Quaternion(float _w, float _x, float _y, float _z)
			{
				w = _w; x = _x; y = _y; z = _z;
			}

			 Quaternion(float _w, Vector3 v)
			{
				w = _w; x = v.X; y = v.Y; z = v.Z;
			}

			  std::string ToString()
			{
				return "(" + w.ToString("g3") + "," + x.ToString("g3") + "i," + y.ToString("g3") + "j," + z.ToString("g3") + "k)";
			}

			 float  getModulus(); 
			
			 Quaternion Normalise()
			{
				float m = w * w + x * x + y * y + z * z;
				if (m > 0.001)
				{
					m = Math.Sqrt(m);
					return new Quaternion(w / m, x / m, y / m, z / m);
				}
				else
				{
					return new Quaternion(1, 0, 0, 0);
				}
			}

			 Quaternion Conjugate()
			{
				return new Quaternion(w, -x, -y, -z);
			}

			 void FromAxisAngle(Vector3 axis, float angleRadian)
			{
				float m = axis.Length();
				if (m > 0.0001)
				{
					float ca = Math.Cos(angleRadian / 2);
					float sa = Math.Sin(angleRadian / 2);
					x = axis.X / m * sa;
					y = axis.Y / m * sa;
					z = axis.Z / m * sa;
					w = ca;
				}
				else
				{
					w = 1; x = 0; y = 0; z = 0;
				}
			}

			 Quaternion Multiply(Quaternion _q)
			{
				float nw = _q.w * w - _q.x * x - _q.y * y - _q.z * z;
				float nx = _q.w * x + _q.x * w + _q.y * z - _q.z * y;
				float ny = _q.w * y + _q.y * w + _q.z * x - _q.x * z;
				float nz = _q.w * z + _q.z * w + _q.x * y - _q.y * x;
				return new Quaternion(nw, nx, ny, nz);
			}

			 Quaternion Copy()
			{
				return new Quaternion(x, y, z, w);
			}
			//                  -1
			// V'=q*V*q     ,

			 Vector3 Rotate(Vector3 pt, int _angle)
			{
				Quaternion axis, rotate;
				axis = this.Normalise();
				float angleRad = Math.PI / 180 * _angle;
				rotate = new Quaternion(Math.Cos(angleRad / 2), Math.Sin(angleRad / 2) * axis.x, Math.Sin(angleRad / 2) * axis.y, Math.Sin(angleRad / 2) * axis.z);
				Quaternion conjugate = rotate.Conjugate();
				Quaternion qNode = new Quaternion(0, pt.X, pt.Y, pt.Z);
				qNode = rotate * qNode * conjugate;
				return new Vector3(qNode.x, qNode.y, qNode.z);
			}

			// Multiplying q1 with q2 is meaning of doing q2 firstly then q1
			  Quaternion operator +(Quaternion q1, Quaternion q2)
			{
				return new Quaternion(q1.w + q2.w, q1.x + q2.x, q1.y + q2.y, q1.z + q2.z);
			}

			  Quaternion operator -(Quaternion q1)
			{
				return new Quaternion(-q1.w, -q1.x, -q1.y, -q1.z);
			}

			  Quaternion operator -(Quaternion q1, Quaternion q2)
			{
				return new Quaternion(q1.w - q2.w, q1.x - q2.x, q1.y - q2.y, q1.z - q2.z);
			}
			

				  Quaternion operator *(Quaternion q1, float s)
			{
				return new Quaternion(q1.w * s, q1.x * s, q1.y * s, q1.z * s);
			}
			  Quaternion operator *(Quaternion q1, float s)
			{
				return new Quaternion(q1.w * s, q1.x * s, q1.y * s, q1.z * s);
			}
			  Quaternion operator *(Quaternion q1, int s)
			{
				return new Quaternion(q1.w * s, q1.x * s, q1.y * s, q1.z * s);
			}
			  Quaternion operator *(float s, Quaternion q1)
			{
				return new Quaternion(q1.w * s, q1.x * s, q1.y * s, q1.z * s);
			}
			  Quaternion operator *(float s, Quaternion q1)
			{
				return new Quaternion(q1.w * s, q1.x * s, q1.y * s, q1.z * s);
			}
			  Quaternion operator *(int s, Quaternion q1)
			{
				return new Quaternion(q1.w * s, q1.x * s, q1.y * s, q1.z * s);
			}
			

				  Quaternion operator *(Quaternion q1, Quaternion q2)
			{
				float nw = q1.w * q2.w - q1.x * q2.x - q1.y * q2.y - q1.z * q2.z;
				float nx = q1.w * q2.x + q1.x * q2.w + q1.y * q2.z - q1.z * q2.y;
				float ny = q1.w * q2.y + q1.y * q2.w + q1.z * q2.x - q1.x * q2.z;
				float nz = q1.w * q2.z + q1.z * q2.w + q1.x * q2.y - q1.y * q2.x;
				return new Quaternion(nw, nx, ny, nz);
			}
		
	

};

