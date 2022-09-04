//#include <GLFW/glfw3.h>
//#include <Windows.h>
//#include <cameraControl.h>
//
//
//struct SCamera camera = { 0,0,1.7,0,0 };
//
//void Camera_Apply() {
//	glRotatef(-camera.xRot, 1, 0, 0);
//	glRotatef(-camera.zRot, 0, 0, 1);
//	glTranslatef(-camera.x, -camera.y, -camera.z);
//}
//
//void Camera_Rotation(float xAngle, float zAngle) {
//	camera.zRot += zAngle;
//	if (camera.zRot < 0) { camera.zRot += 360; };
//	if (camera.zRot > 360) { camera.zRot -= 360;};
//	camera.xRot += xAngle;
//	if (camera.xRot < 0) { camera.xRot = 0; };
//	if (camera.xRot > 180) { camera.xRot = 180; };
//}
//
//void Camera_AutoMoveByMouse(int centerX, int centerY, float speed) {
//	POINT cur;
//	POINT base = { centerX, centerY };
//	GetCursorPos(&cur);
//	Camera_Rotation((base.y - cur.y) / 5.0, (base.x - cur.x) / 5.0);
//	SetCursorPos(base.x, base.y);
//}