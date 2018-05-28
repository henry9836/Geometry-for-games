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
/*
name of function : Normalise
@author: Henry Oliver
@parameter: Normalises a vector
@return: _rResultant (struct)
*/
TVector3& Normalise(const TVector3& _krA, TVector3& _rResultant) {
	/*For any vector V = (x, y, z), |V| = sqrt(x*x + y*y + z*z) gives the length of the vector.

When we normalize a vector, we actually calculate V/|V| = (x/|V|, y/|V|, z/|V|).

It is easy to see that a normalized vector has length 1. This is because:

| V/|V| | = sqrt((x/|V|)*(x/|V|) + (y/|V|)*(y/|V|) + (z/|V|)*(z/|V|))
          = sqrt(x*x + y*y + z*z) / |V|
          = |V| / |V|
          = 1
Hence, we can call normalized vectors as unit vectors (i.e. vectors with unit length).*/
	/*



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

	//|V| = sqrt(x*x + y*y + z*z)
	AL = sqrt((BG.m_fX * AG.m_fX)+(BG.m_fY * AG.m_fY)+(BG.m_fZ * AG.m_fZ));

	//V/|V| = (x/|V|, y/|V|, z/|V|).
	BL = ((/AL)(/AL)(/AL));


	//sqrt(x*x + y*y + z*z) / |V|
	BL = (sqrt((BG.m_fX * AG.m_fX)+(BG.m_fY * AG.m_fY)+(BG.m_fZ * AG.m_fZ)) / AL);


	CG.m_fX = (AG.m_fX/AL);
	CG.m_fY = (AG.m_fY/AL);
	CG.m_fZ = (AG.m_fZ/AL);

	cout << "Normalised Vector Result: (" << CG.m_fX << ", " << CG.m_fY << ", " << CG.m_fZ << ")" << endl; 
	*/
	return _rResultant;
}




/*
name of function : ComputeDistanceCircleToCircle
@author: Andres Villacreces
@parameter: Find the Distance Between the Center of two Circles
@return: float
*/
float ComputeDistanceCircleToCircle(const TCircle& _krCircle1, const TCircle& _krCircle2) {

system("cls");

	float x1, y1, x2, y2, r1, r2, d;

	std::cout << "Computing Line and Sphere Intersection:" << endl << endl;

	std::cout << "1) Defining the EQUATION for the First CIRCLE:" << endl << endl;

	std::cout << "      Enter the Coordinate x-- ";
	std::cin >> x1;
	std::cout << "      Enter the Coordinate y-- ";
	std::cin >> y1;
	std::cout << "      Enter the Radius-- ";
	std::cin >> r1;
	cout << endl;
	std::cout << "  The EQUATION for the First Circle is:" << endl;
	std::cout << "    * " << "(" << "x" << " - " << x1 << ")" << "^" << 2 << " + " << "(" << "y" << " - " << y1 << ")" << "^" << 2 << " = " << r1 << "^" << 2 << "\n";
	cout << endl << endl;

	std::cout << "2) Defining the EQUATION for the Second CIRCLE:" << endl << endl;

	std::cout << "      Enter the Coordinate x-- ";
	std::cin >> x2;
	std::cout << "      Enter the Coordinate y-- ";
	std::cin >> y2;
	std::cout << "      Enter the Radius-- ";
	std::cin >> r2;
	cout << endl;
	std::cout << "  The EQUATION for the Second Circle is:" << endl;
	std::cout << "    * " << "(" << "x" << " - " << x2 << ")" << "^" << 2 << " + " << "(" << "y" << " - " << y2 << ")" << "^" << 2 << " = " << r2 << "^" << 2 << "\n";
	cout << endl << endl;

	std::cout << "3) Finding the Distance Between the Centers of TWO CIRCLES:" << endl << endl;
	d = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
	std::cout << "    The Distance Between the Centers of Two Circles is:  " << endl << "     * " << "[" << d << "]" << endl;
	cout << endl;

	return 0.0;
}

/*
name of function : IsLinePlaneIntersection
@author: Andres Villacreces
@parameter: Find the Point of Intersection Between a Line and a Plane 
@return: bool
*/
bool IsLinePlaneIntersection(const T3DLine& _krLine, const TPlane& _krPlane, TVector3& _rv3IntersectionPoint) {

	system("cls");

	float X, Y, Z, Value_t, dx, dy, dz, x1, x0, y1, y0, z1, z0, m, n, c;

	std::cout << "COMPUTING LINE AND PLANE INTERSECTION:" << endl << endl;

	std::cout << "1) Defining the 3D LINE:" << endl << endl;

	std::cout << " Enter the Values for the X-Point" << endl;
	std::cout << "   * x1-- ";
	std::cin >> x1;
	std::cout << "   * x0-- ";
	std::cin >> x0;
	std::cout << " Enter the Values for the Y-Point" << endl;
	std::cout << "   * y1-- ";
	std::cin >> y1;
	std::cout << "   * y0-- ";
	std::cin >> y0;
	std::cout << " Enter the Values for the Z-Point" << endl;
	std::cout << "   * z1-- ";
	std::cin >> z1;
	std::cout << "   * z0-- ";
	std::cin >> z0;

	dx = x1 - x0;
	dy = y1 - y0;
	dz = z1 - z0;
	
	cout << endl;
	std::cout << "  The 3D LINE is Defined by:" << endl;
	std::cout << "  * " << "x" << " = " << dx << "t" << ((x0 < 0) ? ' ' : '+') << x0 << "\n";
	std::cout << "  * " << "y" << " = " << dy << "t" << ((y0 < 0) ? ' ' : '+') << y0 << "\n";
	std::cout << "  * " << "z" << " = " << dz << "t" << ((z0 < 0) ? ' ' : '+') << z0 << "\n";
	cout << endl << endl;

	std::cout << "2) Finding the EQUATION for the PLANE" << endl << endl;
	std::cout << "  * Enter the Slope of the Line on the y-z Plane: ";
	std::cin >> m;
	std::cout << "  * Enter the Slope of the Line on the y-z Plane: ";
	std::cin >> n;
	std::cout << "  * Enter the 'y' Value of the Plane at the Point (0,0,0): ";
	std::cin >> c;
	cout << endl;

	std::cout << "  The Equation for the PLANE is: " << endl;
	std::cout << "  * " << "y" << " = " << m << "x" << " + " << n << "z" << " + " << c << "\n";
	cout << endl << endl;		std::cout << "3) Finding Point of Intersection of PLANE with LINE" << endl << endl;

	std::cout << "    Using Quadratic Equation to Find the Points" << endl;

	Value_t = (c + m * x0 + n * z0 - y0) / (m * x0 - m * x1 + n * z0 - n * z1 - y0 + y1);
	std::cout << "     * t_Value = " << Value_t << endl;

	X = Value_t * (x1 - x0) + x0;
	Y = Value_t * (y1 - y0) + y0;
	Z = Value_t * (z1 - z0) + z0;

	std::cout << "  Point of Intersection" << endl;
	std::cout << "    P: " << "(" << X << " , " << Y << " , " << Z << ")" << endl;

	return true;
}