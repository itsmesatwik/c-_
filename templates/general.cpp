#include <iostream> // this is called  a preprocessor directive meaning it will run before the program starts
#include <cmath>
#define PI 3.14159 // defines PI as 3.14159

#define AREA_CIRCLE(radius) (PI * (std::pow(radius, 2))) // this is called a macro function


// Template functions
template<typename T>
void TimesN(T val) {
	std::cout << val * n << "\n"; // The operator must hold meaning for the object and must be overloaded for custom objects
}


template<typename T>
T Max(T val, T val2) {
	return (val < val2) ? val2 : val;
}

