#include <iostream>

int main() {
	int n[25000];
	int i=0;
	while (std::cin >> n[i]) {
		i++;
	}
	for (int j=1; j<=i; j++) {
		std::cout << n[i-j] << std::endl;
	}
	//std::cout << i << std::endl;
	return 0;
}
