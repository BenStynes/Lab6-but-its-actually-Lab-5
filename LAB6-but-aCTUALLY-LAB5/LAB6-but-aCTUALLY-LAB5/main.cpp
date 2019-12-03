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
	Matrix3 tester1(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0);
	Matrix3 tester2(9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0);
	Matrix3 tester3(4.0, 5.0, 4.0, 9.0, 8.0, 6.0, 2.0, 12.0, 1.0);
	Matrix3 tester4(3.0, 1.0, 9.0, 6.0, 2.0, 7.0, 0.0, 4.0, 9.0);
	Matrix3 tester5(69.0, 73.0, 10.0, 84.0, 60.0, 89.0, 82.0, 40.0, 17.0);
	Matrix3 tester6(1.0, 2.0, 3.0, 0.0, 1.0, 4.0, 5.0, 6.0, 0.0);
	vector3 row1(1.0, 2.0, 3.0);
	vector3 row2(4.0, 5.0, 6.0);
	vector3 row3(7.0, 8.0, 9.0);
	vector3 secondRow1(9.0, 8.0, 7.0);
	vector3 secondRow2(6.0, 5.0, 4.0);
	vector3 secondRow3(3.0, 2.0, 1.0);
	Matrix3 tester1ButWithMyVector3(row1, row2, row3);
	Matrix3 tester2ButWithMyVector3(secondRow1, secondRow2, secondRow3);
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

	vector3 ans1 = tester1 * row1;
	std::cout << ans1.ToString() << std::endl;
	
	Matrix3 newtest = tester1.Transpose(tester2);
	std::cout << newtest.toString() << std::endl;

	Matrix3 newtest2 = tester1 + tester2;
	std::cout << newtest2.toString() << std::endl;

	Matrix3 newtest3 = tester1 - tester2;
	std::cout << newtest3.toString() << std::endl;

	Matrix3 ans2 = tester1 * tester2;
	std::cout << ans2.toString() << std::endl;
	 
	Matrix3 ans3 = tester1 * 2;
	std::cout << ans3.toString() << std::endl;

	float ans4 = tester1.Determinant(tester1);
	std::cout << ans4 << std::endl;

	vector3 ans5 = tester1.Column(2);
	std::cout << ans5.ToString() << std::endl;

	vector3 ans6 = tester1.Row(2);
	std::cout << ans6.ToString() << std::endl;

	Matrix3 ans7 = tester1.Inverse(tester1);
	std::cout << ans7.toString() << std::endl;

	Matrix3 ans8 = tester1.Rotation(45);
	std::cout << ans8.toString() << std::endl;

	Matrix3 ans9 = tester1.Translate(7,7);

	std::cout << ans9.toString() << std::endl;

	Matrix3 ans10 = tester1.Scale(5,5);
	std::cout << ans10.toString() << std::endl;

	Matrix3 ans11 = -tester1;
	std::cout << ans11.toString() << std::endl;

	Matrix3 ans12 = tester1.RotationX(45);
	std::cout << ans12.toString() << std::endl;
	Matrix3 ans13 = tester1.RotationY(45);
	std::cout << ans13.toString() << std::endl;
	Matrix3 ans14 = tester1.RotationZ(45);
	std::cout << ans14.toString() << std::endl;

	Matrix3 ans15 = tester1.Scale3D(4);
	std::cout << ans15.toString() << std::endl;
	
	vector3 phillTest1(2.0f,-5.0f,-5.0f);

	vector3 phillTest2(-2.0f,-2.0f,-5.0f);
	vector3 phillTest3(2.0f,-2.0f,-5.0f);
	Quaternion test4(0, 0, 0, 1);

		vector3 result4phill = Matrix3::RotationZ(23.21f)  * phillTest3;
		vector3 resulr4Phill2 = test4.Rotate(phillTest3, 5);
		std::cout << "Phill test 1: " << result4phill.ToString() << std::endl;

		std::cout << "Length of V1 : " << phillTest1.Length() << std::endl;

		std::cout << "Lenth squared of V2: " << phillTest2.LengthSquared() << std::endl;

		std::cout << "queterneans test :" << resulr4Phill2.ToString() << std::endl;

	system("Pause");
	return 1;
	
}