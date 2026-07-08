#include <iostream>

int main(){
	int n;
	std::cin >> n;
	int array[10000000];
	for (int i = 0; i < n; i++) {
		std::cin >> array[i];
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i; j < n; j++) {
			if (array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		std::cout << array[i] << std::endl;
	}
}