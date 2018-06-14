#include <iostream>
#include <vector>

std::vector<int> func1(std::vector<int> nums, std::function<bool(int)> isOdd);
bool isOdd(int num);

int main() {

	return 0;
}


/**
 * Takes in a vector of integers and returns 
 * the list of all the odd numbers that were in the
 * given list.
 *
 * Using std::function<return_type(argument_type1,..., argument_typeN)> allows us to 
 * assign a function to a variable or pass on functions to functions
 * @param nums The list of integers
 * @param isOdd the function passed to this function as an argument.
 */
std::vector<int> func1(std::vector<int> nums, std::function<bool(int)> isOdd) {
	std::vector<int> odd_nums_;
	for (auto num : nums) {
		if (isOdd(num))
			odd_nums_.push_back(num)
	}
	return odd_nums_;
}

/**
 * Function demonstrating an example usage of passing functions to functions
 * Could be used in a calculator application
 */
double operate(double num1, double num2, std::function<double(double, double)> operation) {
    return operation(num1, num2);
}


bool isOdd(int num) {
	return (num % 2 != 0);
}
