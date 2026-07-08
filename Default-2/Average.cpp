#include <iostream>

int main() {
	int n;
	int total = 0;
	int max = 0;
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		int l;
		std::cin >> l;
		if (max < l) {
			max = l;
		}
		total += l;
	}

	std::cout << (100.0 * total / max / n);
}