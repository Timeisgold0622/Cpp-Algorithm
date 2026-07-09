#include <iostream>

int main() {
	int n;
	int total = 0;
	std::cin >> n;
	std::string nums;
	std::cin >> nums;

	for (int i = 0; i < n; ++i) {
		total += (int)nums[i];
	}
	std::cout << total;
}