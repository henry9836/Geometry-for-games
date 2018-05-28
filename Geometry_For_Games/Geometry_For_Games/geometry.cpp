#include <iostream>
#include <string>
#include "geometry.h"
#include "test.h"

using namespace std;

TVector3 AG;
TVector3 BG;
TVector3 CG;
TVector3 DG;

/*
name of function: Equals
@author: Henry Oliver
@parameter: checks if one vector is equal to another vector
@return: true or false
*/
bool Equals(TVector3& _krA, TVector3& _krB) {
	system("cls");
	float iT = 0;
	bool equals = false;
	cout << "-= Vector 1 =-" << endl;
	cout << "X: ";
	cin >> iT;
	_krA.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	_krA.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	_krA.m_fZ = getfloat(iT);

	cout << endl << endl;

	cout << "-= Vector 2 =-" << endl;
	cout << "X: ";
	cin >> iT;
	_krB.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	_krB.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	_krB.m_fZ = getfloat(iT);

	if ((_krA.m_fX == _krB.m_fX) && (_krA.m_fY == _krB.m_fY) && (_krA.m_fZ == _krB.m_fZ)) {
		equals = true;
	}

	return equals;
}


/*
name of function: Add
@author: Henry Oliver
@parameter: adds two vectors
@return: _rResultant vector (struct)
*/

TVector3& Add(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant) {
	
	system("cls");
	float iT = 0;

	cout << "-= Vector 1 =-" << endl;
	cout << "X: ";
	cin >> iT;
	AG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	AG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	AG.m_fZ = getfloat(iT);
	
	cout << "-= Vector 2 =-" << endl;
	cout << "X: ";
	cin >> iT;
	BG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	BG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	BG.m_fZ = getfloat(iT);

	_rResultant.m_fX = (AG.m_fX + BG.m_fX);
	_rResultant.m_fY = (AG.m_fY + BG.m_fY);
	_rResultant.m_fZ = (AG.m_fZ + BG.m_fZ);

	cout << "Result: (" << _rResultant.m_fX << ", " << _rResultant.m_fY << ", " << _rResultant.m_fZ << ")" << endl;

	return _rResultant;
}
/*
name of function : Subtract
@author: Henry Oliver
@parameter: Subtracts two vectors
@return: _rResultant vector(struct)
*/
TVector3& Subtract(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant) {
	system("cls");
	float iT = 0;

	cout << "-= Vector 1 (Original) =-" << endl;
	cout << "X: ";
	cin >> iT;
	AG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	AG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	AG.m_fZ = getfloat(iT);

	cout << "-= Vector 2 (To Subtract) =-" << endl;
	cout << "X: ";
	cin >> iT;
	BG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	BG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	BG.m_fZ = getfloat(iT);

	_rResultant.m_fX = (AG.m_fX - BG.m_fX);
	_rResultant.m_fY = (AG.m_fY - BG.m_fY);
	_rResultant.m_fZ = (AG.m_fZ - BG.m_fZ);

	cout << "Result: (" << _rResultant.m_fX << ", " << _rResultant.m_fY << ", " << _rResultant.m_fZ << ")" << endl;

	return _rResultant;
}

/*
name of function : ScaleVector
@author: Henry Oliver
@parameter: Scales a Vector
@return: _rResultant vector(struct)
*/
TVector3& ScaleVector(const TVector3& _krA, const float _kfScalar, TVector3& _rResultant) {
	
	system("cls");
	float iT;
	float scalar;

	cout << "Scalar: ";
	cin >> scalar;

	cout << "-= Vector =-" << endl;
	cout << "X: ";
	cin >> iT;
	iT = iT * scalar;
	AG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	iT = iT * scalar;
	AG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	iT = iT * scalar;
	AG.m_fZ = getfloat(iT);

	cout << endl << endl;

	cout << "Result: (" << AG.m_fX << ", " << AG.m_fY << ", " << AG.m_fZ << ")" << endl;

	return  _rResultant;

}

/*
name of function : Magnitude
@author: Henry Oliver
@parameter: Finds the magnitude of a vector
@return: float (result)
*/
float Magnitude(const TVector3& _krA) {
	system("cls");
	float iT = 0;
	float result = 0;

	cout << "-= Vector =-" << endl;
	cout << "X: ";
	cin >> iT;
	AG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	AG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	AG.m_fZ = getfloat(iT);

	result = sqrt((AG.m_fX*AG.m_fX) + (AG.m_fY*AG.m_fY) + (AG.m_fZ*AG.m_fZ));

	return result;
}

/*
name of function : DotProduct
@author: Henry Oliver
@parameter: Finds the DotProduct of two vectors
@return: float (result)
*/
float DotProduct(const TVector3& _krA, const TVector3& _krB) {
	system("cls");
	float iT = 0;
	float result = 0;

	cout << "-= Vector 1 =-" << endl;
	cout << "X: ";
	cin >> iT;
	AG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	AG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	AG.m_fZ = getfloat(iT);

	cout << endl << endl;

	cout << "-= Vector 2 =-" << endl;
	cout << "X: ";
	cin >> iT;
	BG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	BG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	BG.m_fZ = getfloat(iT);

	result = ((AG.m_fX + BG.m_fX)+(AG.m_fY + BG.m_fY)+(BG.m_fZ + BG.m_fZ));

	return result;
}

/*
name of function : CrossProduct
@author: Henry Oliver
@parameter: Finds the CrossProduct of two vectors
@return: _rResultant (struct)
*/
TVector3& CrossProduct(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant) {

	system("cls");
	float iT = 0;

	cout << "-= Vector 1 =-" << endl;
	cout << "X: ";
	cin >> iT;
	AG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	AG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	AG.m_fZ = getfloat(iT);

	cout << endl << endl;

	cout << "-= Vector 2 =-" << endl;
	cout << "X: ";
	cin >> iT;
	BG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	BG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	BG.m_fZ = getfloat(iT);

	CG.m_fX = ((AG.m_fY*BG.m_fZ) - (AG.m_fZ*BG.m_fY));
	CG.m_fY = ((AG.m_fZ*BG.m_fX) - (AG.m_fX*BG.m_fZ));
	CG.m_fZ = ((AG.m_fX*BG.m_fY) - (AG.m_fY*BG.m_fX));

	cout << "Result: (" << CG.m_fX << ", " << CG.m_fY << ", " << CG.m_fZ << ")" << endl;

	return _rResultant;
}

TVector3& Normalise(const TVector3& _krA, TVector3& _rResultant) {
	/*For any vector V = (x, y, z), |V| = sqrt(x*x + y*y + z*z) gives the length of the vector.

When we normalize a vector, we actually calculate V/|V| = (x/|V|, y/|V|, z/|V|).

It is easy to see that a normalized vector has length 1. This is because:

| V/|V| | = sqrt((x/|V|)*(x/|V|) + (y/|V|)*(y/|V|) + (z/|V|)*(z/|V|))
          = sqrt(x*x + y*y + z*z) / |V|
          = |V| / |V|
          = 1
Hence, we can call normalized vectors as unit vectors (i.e. vectors with unit length).*/
	



	system("cls");
	float iT = 0;
	float AL = 0;
	float BL = 0;

	cout << "-= Vector 1 =-" << endl;
	cout << "X: ";
	cin >> iT;
	AG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	AG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	AG.m_fZ = getfloat(iT);

	cout << endl << endl;

	cout << "-= Vector 2 =-" << endl;
	cout << "X: ";
	cin >> iT;
	BG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	BG.m_fY = getfloat(iT);

	cout << "Z: ";
	cin >> iT;
	BG.m_fZ = getfloat(iT);

	//AL = sqrt();

	return _rResultant;
}