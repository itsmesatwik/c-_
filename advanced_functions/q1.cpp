#include <iostream>
#include <vector>

std::vector<int> func1(std::vector<int> nums, std::function<bool(int)> isOdd);
bool isOdd(int num);

int main() {

	return 0;
}

std::vector<int> func1(std::vector<int> nums, std::function<bool(int)> isOdd) {
	std::vector<int> odd_nums_;
	for (auto num : nums) {
		if (isOdd(num))
			odd_nums_.push_back(num)
	}
	return odd_nums_;
}

bool isOdd(int num) {
	return (num % 2 != 0);
}