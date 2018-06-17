#include "template_class.h"

// When we templatize something we must use <Object Type> when calling the object
// Example: TemplateObject<ObjectType> object1();   

template<typename T, typename U>
Person<T,U>::Person(T h, U w) {
    height = h, weight = w;
    numOfPeople++;
}

template<typename T, typename U>
Person<T,U>::getData() {
    std::cout<<height<<weight;
}
