#include "Quaternion.h"

float Quaternion::getModulus()
{
	return  sqrt(w * w + x * x + y * y + z * z);
}
