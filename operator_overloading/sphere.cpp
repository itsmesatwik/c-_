#include "sphere.h"

double Sphere::getRadius() {	
	return radius_;
}

double Sphere::getArea() {
	return surface_area_;
}
double Sphere::getVolume() {
	return volume_;
}

void Sphere::update_sphere() {
	surface_area_ = 4 * pi * radius_ * radius_;
	volume_  = 4/3 * pi * radius_ * radius_ * radius_;
}

Sphere::Sphere() {
	radius_ = 1;
	update_sphere();
}

Sphere::Sphere(double radius) {
	radius_ = radius;
	update_sphere();
}

Sphere::~Sphere() {
}

Sphere& Sphere::operator ++ () {
	radius_++;
	update_sphere();
	return *this;
}

Sphere::operator const char*() {
	std::ostringstream sphere_stream_;
	sphere_stream_ << "Sphere: " << 
	radius_ << ", " << 
	surface_area_ << ", " << volume_;
}

bool Sphere::operator == (const Sphere& rhs) {
	return (radius_ == rhs.getRadius());
}

Sphere Sphere::operator + (const Sphere& rhs) {
	radius_ += rhs.getRadius();
	update_sphere();
}

std::ostream& Sphere::operator << (std::ostream& os, const Sphere& sphere) {
	os << "Sphere: " << 
	radius_ << ", " << 
	surface_area_ << ", " << volume_;
	return os;
}