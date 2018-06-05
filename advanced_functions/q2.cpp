/*
	Generate 100 heads or tails and output the number of heads and tails that were
	generated
*/

#include <iostream>
#include <random>
#include <vector>

void HeadsOrTails (std::vector<bool> list) {
	int countH = 0; int countT = 0;
	for (auto elem : list) {
		if (elem)
			countT++;
		else
			countH++;	
	}
	std::cout << "H : " << countH << "\n" << "T : " << countT << endl;
}

int main() {
	srand(NULL);
	std::vector<bool> HTlist;
	for (int i = 0; i < 100; i++) {
		int toss = rand() % 2;
		if (toss)
			HTlist.push_back(true);
		else
			HTlist.push_back(false);
	}
	HeadsOrTails(HTlist);
	return 0;
}