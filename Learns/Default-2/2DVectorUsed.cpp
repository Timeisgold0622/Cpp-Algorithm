#include <iostream>
#include <vector>

struct Edge {
	int endNode;
	int value;
};

int main() {
	std::vector<std::vector<Edge>> a; // 2차원 배열 선언

	int N, E;
	std::cin >> N >> E;
	a.resize(N + 1);

	for (int i = 0; i < E; ++i) {
		int s, e, v = 0;
		std::cin >> s >> e >> v;
		a[s].push_back({ e,v });
	}
}