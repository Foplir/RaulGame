#include <iostream>

struct SCamera {
	float x, y, z;
	float xRot, zRot;
};

void Camera_Apply();
void Camera_Rotation(float xAngle, float zAngle);
void Camera_AutoMoveByMouse(int centerX, int centerY, float speed);
