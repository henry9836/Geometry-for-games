#include <iostream>
#include <string>
#include "geometry.h"
#include "test.h"
#include "windows.h"

TVector3 VectorAT;
TVector3 VectorBT;
TVector3 VectorCT;
TVector3 VectorDT;

TVector2 VectorA2DT;
TVector2 VectorB2DT;
TVector2 VectorC2DT;
TVector2 VectorD2DT;

TPlane PlaneAT;
TPlane PlaneBT;
TPlane PlaneCT;
TPlane PlaneDT;

T3DLine LineAT;
T3DLine LineBT;
T3DLine LineCT;
T3DLine LineDT;


TCircle CircleAT;
TCircle CircleBT;
TCircle CircleCT;
TCircle CircleDT;

TSphere SphereAT;
TSphere SphereBT;
TSphere SphereCT;
TSphere SphereDT;

TTriangle2 LineA2DT;
TTriangle2 LineB2DT;

using namespace std;

int getint(int inint) {
	return inint;
}

float getfloat(float infloat){
	return infloat;
}


bool testmefunctions() {

	VectorAT.m_fX = 2;
	VectorAT.m_fY = 2;
	VectorAT.m_fZ = 2;
	VectorBT.m_fX = 2;
	VectorBT.m_fY = 2;
	VectorBT.m_fZ = 2;
	VectorCT.m_fX = 2;
	VectorCT.m_fY = 2;
	VectorCT.m_fZ = 2;

	const float tfloat = 4.0f;
	
	VectorA2DT.m_fX = 2;
	VectorA2DT.m_fY = 2;
	VectorB2DT.m_fX = 2;
	VectorB2DT.m_fY = 2;

	cout << "Testing..." << endl;

	bool result = Equals(VectorAT, VectorBT);
	if (result == true) {
		cout << "Equals Works!" << endl;
	}
	else {
		cout << "Problem with Equals" << endl;
	}
	Beep(1, 1000);
	VectorAT = Add(VectorAT, VectorBT, VectorCT);
	cout << "Result: (" << VectorAT.m_fX << ", " << VectorAT.m_fY << ", " << VectorAT.m_fZ << ")" << endl;
	system("pause");
	VectorAT = Subtract(VectorAT, VectorBT, VectorCT);
	cout << "Result: (" << VectorAT.m_fX << ", " << VectorAT.m_fY << ", " << VectorAT.m_fZ << ")" << endl;
	system("pause");
	VectorAT = ScaleVector(VectorAT, tfloat, VectorCT);
	cout << "Result: (" << VectorAT.m_fX << ", " << VectorAT.m_fY << ", " << VectorAT.m_fZ << ")" << endl;
	system("pause");
	//VectorAT = Magnitude(VectorCT);
	DotProduct(VectorAT, VectorBT);
	CrossProduct(VectorAT, VectorBT, VectorCT);
	Normalise(VectorAT, VectorBT);
	Projection(VectorAT, VectorBT, VectorCT);
	ComputeAngleBetween(VectorA2DT, VectorB2DT);
	ComputeAngleBetween(VectorAT, VectorBT);
	ComputeDistancePointToLine(LineAT, VectorAT);

	return true;
}













