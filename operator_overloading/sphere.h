#include <ostream>

const float pi = 3.14159;

class Sphere {
private:
	double radius_;
	double surface_area_;
	double volume_;

public:
	double getRadius();
	double getArea();
	double getVolume();
	void update_sphere();
	Sphere();
	Sphere(double radius);
	~Sphere();
	operator const char* ();
	bool operator == (const Sphere& rhs);
	Sphere operator + (const Sphere& rhs);
	std::ostream& operator << (std::ostream& os, const Sphere& sphere);
}