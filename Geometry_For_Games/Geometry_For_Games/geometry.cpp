#include <iostream>
#include <string>
#include "geometry.h"
#include "test.h"

using namespace std;

#define PI 3.14159265

TVector3 AG;
TVector3 BG;
TVector3 CG;
TVector3 DG;

TVector2 TwoAG;
TVector2 TwoBG;
TVector2 TwoCG;
TVector2 TwoDG;

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

	AL = sqrt((AG.m_fX * AG.m_fX)+(AG.m_fY * AG.m_fY)+(AG.m_fZ * AG.m_fZ));

	//V/|V| = (x/|V|, y/|V|, z/|V|)

	CG.m_fX = (AG.m_fX/AL);
	CG.m_fY = (AG.m_fY/AL);
	CG.m_fZ = (AG.m_fZ/AL);

	cout << "Normalised Vector Result: (" << CG.m_fX << ", " << CG.m_fY << ", " << CG.m_fZ << ")" << endl; 



	return _rResultant;
}

/*
name of function : Projection
@author: Henry Oliver
@parameter: Projects Two Vectors
@return: _rResultant (struct)
*/
TVector3& Projection(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant) {

	system("cls");
	float iT = 0;
	float dot_p = 0;
	float mag = 0;
	float ans = 0;

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

	dot_p = ((AG.m_fX*BG.m_fX)+(AG.m_fY*BG.m_fY)+(AG.m_fZ * BG.m_fZ));

	mag = (sqrt((BG.m_fX*BG.m_fX)+(BG.m_fY*BG.m_fY)+(BG.m_fZ*BG.m_fZ)));

	ans = (dot_p / mag);

	cout << "Projection: " << ans << endl;

	return _rResultant;
}

/*
name of function : ComputeAngleBetween
@author: Henry Oliver
@parameter: Computes Angles Between Two Vectors
@return: float
*/
float ComputeAngleBetween(const TVector2& _krA, const TVector2& _krB) {

	system("cls");
	float iT = 0;
	float dot_p = 0;
	float mag = 0;
	float ans = 0;
	float length_A;
	float length_B;
	float dot_product;

	cout << "-= Vector 1 =-" << endl;
	cout << "X: ";
	cin >> iT;
	TwoAG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	TwoAG.m_fY = getfloat(iT);

	cout << endl << endl;

	cout << "-= Vector 2 =-" << endl;
	cout << "X: ";
	cin >> iT;
	TwoBG.m_fX = getfloat(iT);

	cout << "Y: ";
	cin >> iT;
	TwoBG.m_fY = getfloat(iT);

	length_A = sqrt((TwoAG.m_fX * TwoAG.m_fX) + (TwoAG.m_fY * TwoAG.m_fY));
	length_B = sqrt((TwoBG.m_fX * TwoBG.m_fX) + (TwoBG.m_fY * TwoBG.m_fY));

	dot_product = ((TwoAG.m_fX * TwoBG.m_fX)+(TwoAG.m_fY * TwoBG.m_fY));

	ans = (dot_product / (length_A * length_B));

	ans = acos(ans);

	iT = ans;

	ans = (ans * 180 / PI);

	cout << "The Angle Between The Two Vectors is: " << ans << " Degrees" << endl;
	cout << "Or: " << iT << " Radians" << endl;

	return ans;
}

/*
name of function : ComputeAngleBetween
@author: Henry Oliver
@parameter: Computes Angles Between Two 3AxisVectors
@return: float
*/
float ComputeAngleBetween(const TVector3& _krA, const TVector3& _krB) {

	system("cls");
	float iT = 0;
	float dot_p = 0;
	float mag = 0;
	float ans = 0;
	float length_A;
	float length_B;
	float dot_product;

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

	length_A = sqrt((AG.m_fX * AG.m_fX) + (AG.m_fY * AG.m_fY) + (AG.m_fZ * AG.m_fZ));
	length_B = sqrt((BG.m_fX * BG.m_fX) + (BG.m_fY * BG.m_fY) + (BG.m_fZ * BG.m_fZ));

	dot_product = ((AG.m_fX * BG.m_fX) + (AG.m_fY * BG.m_fY) + (AG.m_fZ * BG.m_fZ));

	ans = (dot_product / (length_A * length_B));

	ans = acos(ans);

	iT = ans;

	ans = (ans * 180 / PI);

	cout << "The Angle Between The Two Vectors is: " << ans << " Degrees" << endl;
	cout << "Or: " << iT << " Radians" << endl;

	return ans;
}


/*
name of function : ComputeDistancePointToPlane
@author: Andres Villacreces
@parameter: Find the Distance From a point to a Plane
@return: float
*/
float ComputeDistancePointToPlane(const TPlane& _krPlane, const TVector3& _krPoint) {

	system("cls");

	float x, y, z, A, B, C, D, d;

	std::cout << "COMPUTING DISTANCE FROM ANY POINT TO A PLANE:" << endl << endl;

	std::cout << "1) Enter the Coordinates of the Point:" << endl << endl;

	std::cout << "      Enter the Coordinate x-- ";
	std::cin >> x;
	std::cout << "      Enter the Coordinate y-- ";
	std::cin >> y;
	std::cout << "      Enter the Coordinate Z-- ";
	std::cin >> z;
	cout << endl;

	std::cout << "  The 3D Coordinate is:" << endl;
	std::cout << "    * " << "(" << x << " , " << y << " , " << z << ")" << "\n";
	cout << endl << endl;

	std::cout << "2) Finding the EQUATION for the PLANE" << endl << endl;
	std::cout << "  * Enter the Point A (Vector): ";
	std::cin >> A;
	std::cout << "  * Enter the Point B (Vector): ";
	std::cin >> B;
	std::cout << "  * Enter the Point C (Vector): ";
	std::cin >> C;
	std::cout << "  * Enter the Point D (Vector): ";
	std::cin >> D;
	cout << endl;

	std::cout << "  The Equation for the PLANE is: " << endl;
	std::cout << "  * " << A << "x" << " + " << B << "y" << " + " << C << "z" << " + " << D << " = " << 0 << "\n";
	cout << endl << endl;


	std::cout << "3) Finding the Distance From a POINT to a PLANE:" << endl << endl;
	d = (A * x + B * y + C * z + D) / (sqrt((pow((A), 2)) + (pow((B), 2)) + (pow((C), 2))));
	std::cout << "    The Distance From a POINT to a PLANE is:  " << endl << "     * " << "[" << d << "]" << endl;
	cout << endl;

	return 0.0;
}

/*
name of function : ComputeDistancePointToSphere
@author: Andres Villacreces
@parameter: Find the Distance Between a point and the Center of a Sphere
@return: float
*/
float ComputeDistancePointToSphere(const TSphere& _krSphere, const TVector3& _krPoint){

system("cls");

	float x, y, z, h, k, j, r, d;

	std::cout << "COMPUTING DISTANCE BETWEEN POINT AND CENTER OF THE SPHERE:" << endl << endl;

	std::cout << "1) Enter the Coordinates of the Point:" << endl << endl;

	std::cout << "      Enter the Coordinate x-- ";
	std::cin >> x;
	std::cout << "      Enter the Coordinate y-- ";
	std::cin >> y;
	std::cout << "      Enter the Coordinate Z-- ";
	std::cin >> z;
	cout << endl;

	std::cout << "  The 3D Coordinate is:" << endl;
	std::cout << "    * " << "(" << x << " , " << y << " , " << z << ")" << "\n";
	cout << endl << endl;

	std::cout << "2) Defining the EQUATION for the SPHERE" << endl << endl;
	std::cout << "   * Enter the Value 'h'-- ";
	std::cin >> h;
	std::cout << "   * Enter the Value 'k'-- ";
	std::cin >> k;
	std::cout << "   * Enter the Value 'j'-- ";
	std::cin >> j;
	std::cout << "   * Enter the Value 'r'-- ";
	std::cin >> r;
	cout << endl;

	std::cout << "  The Equation for the SPHERE is: " << endl;
	std::cout << "    * " << "[" << "(" << "x" << " - " << h << ")" << "^" << 2 << "]" << " + " << "[" << "(" << "y" << " - " << k << ")" << "^" << 2 << "]"
		<< " + " << "[" << "(" << "z" << " - " << j << ")" << "^" << 2 << "]" << " = " << "(" << r << ")" << "^" << 2 << "\n";
	cout << endl << endl;

	std::cout << "3) Finding the Distance Between POINT and Center of the SPHERE:" << endl << endl;
	d = sqrt((pow((x - h), 2)) + (pow((y - k), 2)) + (pow((z - j), 2))) - r;
	std::cout << "    The Distance Between POINT and Center of the SPHERE is:  " << endl << "     * " << "[" << d << "]" << endl;
	cout << endl;

	return 0.0;
}

/*
name of function : ComputeDistanceCircleToCircle
@author: Andres Villacreces
@parameter: Find the Distance Between the Center of two Circles
@return: float
*/
float ComputeDistanceCircleToCircle(const TCircle& _krCircle1, const TCircle& _krCircle2) {

system("cls");

	float h1, h2, k2, k1, r1, r2, d;

	std::cout << "COMPUTING DISTANCE BETWEEN THE CENTERS OF TWO CICLES:" << endl << endl;

	std::cout << "1) Defining the EQUATION for the First CIRCLE:" << endl << endl;

	std::cout << "      * Center of the Circle: Coordinate 'h'-- ";
	std::cin >> h1;
	std::cout << "      * Center of the Circle: Coordinate 'k'-- ";
	std::cin >> k1;
	std::cout << "      Enter the Radius-- ";
	std::cin >> r1;
	cout << endl;
	std::cout << "  The EQUATION for the First Circle is:" << endl;
	std::cout << "    * " << "(" << "x" << " - " << h1 << ")" << "^" << 2 << " + " << "(" << "y" << " - " << k1 << ")" << "^" << 2 << " = " << r1 << "^" << 2 << "\n";
	cout << endl << endl;

	std::cout << "2) Defining the EQUATION for the Second CIRCLE:" << endl << endl;

	std::cout << "      * Center of the Circle: Coordinate 'h'-- ";
	std::cin >> h2;
	std::cout << "      * Center of the Circle: Coordinate 'k'-- ";
	std::cin >> k2;
	std::cout << "      Enter the Radius-- ";
	std::cin >> r2;
	cout << endl;
	std::cout << "  The EQUATION for the Second Circle is:" << endl;
	std::cout << "    * " << "(" << "x" << " - " << h2 << ")" << "^" << 2 << " + " << "(" << "y" << " - " << k2 << ")" << "^" << 2 << " = " << r2 << "^" << 2 << "\n";
	cout << endl << endl;

	std::cout << "3) Finding the Distance Between the Centers of TWO CIRCLES:" << endl << endl;
	d = sqrt((pow((h2 - h1), 2)) + (pow((k2 - k1), 2)));
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

	std::cout << "  The Point of Intersection Between a LINE AND a PLANE" << endl;
	std::cout << "    P: " << "(" << X << " , " << Y << " , " << Z << ")" << endl;

	return true;
}