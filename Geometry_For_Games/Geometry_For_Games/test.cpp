#include <iostream>
#include <string>
#include "geometry.h"
#include "test.h"

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
	VectorAT.m_fY = 3;
	VectorAT.m_fZ = 5;
	VectorBT.m_fX = 2;
	VectorBT.m_fY = 3;
	VectorBT.m_fZ = 5;
	VectorCT.m_fX = 2;
	VectorCT.m_fY = 3;
	VectorCT.m_fZ = 5;

	const float tfloat = 4.0f;
	
	VectorA2DT.m_fX = 6;
	VectorA2DT.m_fY = 3;
	VectorB2DT.m_fX = 8;
	VectorB2DT.m_fY = 9;

	cout << "Testing..." << endl;

	Equals(VectorAT, VectorBT);


	Add(VectorAT, VectorBT, VectorCT);
	Subtract(VectorAT, VectorBT, VectorCT);
	ScaleVector(VectorAT, tfloat, VectorCT);
	Magnitude(VectorCT);
	DotProduct(VectorAT, VectorBT);
	CrossProduct(VectorAT, VectorBT, VectorCT);
	Normalise(VectorAT, VectorBT);
	Projection(VectorAT, VectorBT, VectorCT);
	ComputeAngleBetween(VectorA2DT, VectorB2DT);
	ComputeAngleBetween(VectorAT, VectorBT);
	ComputeDistancePointToLine(LineAT, VectorAT);

	return true;
}













