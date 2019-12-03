#include <iostream>
#include "Quaternion.h"
#include "Matrix3.h"
#include "Vector2f.h"
#include "vector3.h"
#include "main.h"

int main()
{
	vector3 testVect3;
	vector3 testVect31;
	Matrix3 testMat3;
	Vector2f testvect2f;
	Vector2f testvect2f1;
	Quaternion testquat;
	testvect2f.setX(1);
	testvect2f.setY(2);

	std::cout << "Test for Vector2f" << std::endl;
	testvect2f.Normalise();
	std::cout << testvect2f.ToString();
	std::cout << std::endl;
	std::cout << "Length:" << testvect2f.Length() << std::endl;
	
	std::cout << "Length Squared:" << testvect2f.LengthSquared() << std::endl;
	testvect2f.setX(1);
	testvect2f.setY(2);

	float n = testvect2f * Vector2f{2, 2};
	std::cout << n;
	std::cout << std::endl;

	testvect2f.setX(1);
	testvect2f.setY(2);

	Vector2f c = testvect2f + Vector2f{ 2,2 };
	std::cout << c.ToString();
	std::cout << std::endl;
	testvect2f.setX(1);
	testvect2f.setY(2);
	Vector2f a = testvect2f  - Vector2f{ 2,2 };
	std::cout << a.ToString();
	
	std::cout << std::endl;
	Vector2f b = -testvect2f;
	std::cout << b.ToString();
	std::cout << std::endl;
	testvect2f.setX(1);
	testvect2f.setY(2);
	Vector2f reee = testvect2f * 2;
	std::cout << reee.ToString();
	std::cout << std::endl;
	Vector2f ree =testvect2f * 2.0;
	std::cout << ree.ToString();
	std::cout << std::endl;
	Vector2f re = testvect2f * 2.0f;
	std::cout << re.ToString();
	std::cout << std::endl; 

	testVect31.setX(4);
	testVect31.setY(5);
	testVect31.setZ(6);
	
	testVect3.setX(1);
	testVect3.setY(2);
	testVect3.setZ(3);
	testVect3.Normalise();
	std::cout << "Test for Vector3f" << std::endl;
	std::cout << testVect3.ToString();
	std::cout << std::endl;


	testVect3.setX(1);
	testVect3.setY(2);
	testVect3.setZ(3);
	
	std::cout << "Length:" << testVect3.Length() << std::endl;
	std::cout << "Length Squared:" << testVect3.LengthSquared() << std::endl;


	testVect3.setX(1);
	testVect3.setY(2);
	testVect3.setZ(3);

	
	float x = testVect3 * vector3{ 2, 2,2 };
	std::cout  << n;
	std::cout << std::endl;

	testVect3.setX(1);
	testVect3.setY(2);
	testVect3.setZ(3);

	vector3 d = testVect3 + vector3{ 2,2,2 };
	std::cout << d.ToString();
	std::cout << std::endl;
	testVect3.setX(1);
	testVect3.setY(2);
	testVect3.setZ(3);
	vector3 f = testVect3 - vector3{ 2,2,2 };
	std::cout << f.ToString();

	std::cout << std::endl;
	vector3 bj= -testVect3;
	std::cout << bj.ToString();
	std::cout << std::endl;
	testVect3.setX(1);
	testVect3.setY(2);
	testVect3.setZ(3);
	vector3 reeee = testVect3 * 2;
	std::cout << reeee.ToString();
	std::cout << std::endl;
	vector3 r = testVect3 * 2.0;
	std::cout << r.ToString();
	std::cout << std::endl;
	vector3 rer = testVect3 * 2.0f;
	std::cout << rer.ToString();
	std::cout << std::endl;
	
	vector3 erer = testVect3 ^ testVect31;
	std::cout << erer.ToString() << std::endl;
	std::cout << "Test for Matrix3" << std::endl;



	system("Pause");
	return 1;

}