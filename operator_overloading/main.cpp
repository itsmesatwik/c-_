#include <iostream>
#include "sphere.h"

int main() {
	Sphere sphere(10);
	Sphere sphere2(5);
	Sphere sphere3(10);
	sphere++;
	sphere2 += sphere;
	std::cout << sphere << " " << sphere2 << "\n";
	if (sphere == sphere3)
		std::cout<<"True"<<"\n";
	else
		std::cout<<"False"<<"\n";
}