#include <iostream>
#include <vector>

int main() {
	int size, quizs;
	std::cin >> size >> quizs;
	std::vector < std::vector<int> > a(size + 1, std::vector<int>(size + 1,0));
	std::vector < std::vector<int> > d(size + 1, std::vector<int>(size + 1, 0));

	for (int i = 1; i <= size; ++i) {
		for (int j = 1; j <= size; ++j) {
			std::cin >> d[i][j];
			a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + d[i][j];
		}
	}
	for (int i = 0; i < quizs; ++i) {
		int x1, y1, x2, y2;
		std::cin >> x1 >> y1 >> x2 >> y2;
		std::cout << a[x2][y2] - a[x1-1][y2] - a[x2][y1-1] + a[x1-1][y1-1] << "\n";
	}
}