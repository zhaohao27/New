#include<iostream>
#include<math.h>
#define M_PI 3.1415926
using namespace std;


struct Vector3D
{
	double x, y, z;

	double magnitude()const {
		return sqrt(x * x + y * y + z * z);
	}

	double dot(const Vector3D& other)const {
		return x * other.x + y * other.y + z * other.z;
	}

	double angleWith(const Vector3D& other)const {
	
		double dot_product = this->dot(other);
		double magnitudes = this->magnitude() * other.magnitude();
		double cos_theta = dot_product / magnitudes;

		return acos(cos_theta)* (180.0 / M_PI);
	}
};





int main()
{
	double point1x = 125.7545;
	double point1y = -3.3839;
	double point1z = -905.8938;
	double point2x = 122.157;
	double point2y = 0.8031;
	double point2z = -378.1765;
	double point3x = 126.03;
	double point3y = -3.48;
	double point3z = -906.11;
	double point4x = 122.22;
	double point4y = 0.89;
	double point4z = -378.92;
	double v1x = point2x - point1x;
	double v1y = point2y - point1y;
	double v1z = point2z - point1z;
	double v2x = point4x - point3x;
	double v2y = point4y - point3y;
	double v2z = point4z - point3z;
	Vector3D a{ v1x,v1y,v1z };
	Vector3D b{ v2x,v2y,v2z };
	cout << "error = " << a.angleWith(b) << endl;
	
	return 0;
}