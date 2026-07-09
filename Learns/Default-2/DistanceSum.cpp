#include <iostream>
#include <vector>

int main() {

	int sumT[10001];

	int datas, quizs;

	std::cin >> datas >> quizs;

	for (int i = 1; i < datas; ++i) {
		int t;
		std::cin >> t;
		sumT[i] = sumT[i - 1] + t;
	}
	for (int i = 0; i < quizs; ++i) {
		int s, e;
		std::cin >> s >> e;
		std::cout << sumT[e-1] - sumT[s-1];
	}
}