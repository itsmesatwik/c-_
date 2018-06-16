// These are called preprocessor directives and 
// run before everything else in the program
// These are identified by their signatory "#" prefix

#ifndef ANIMAL_H // This guards against including this header in multiple different programs
#define ANIMAL_H // makes sure that we read the following lines only a single time

#define PI 3.14158 // Defining macro constants
#define AREA_CIRCLE(radius) (PI*(std::pow(radius, 2))) // Defining macro functions

class Animal {
public:
    Animal();
    Animal(const Animal& orig);
    virtual ~Animal();
private:

};

/*
 * Your code here
 */

#endif
