#include <iostream>

int main() {
	int n, k;
	std::cin >> n >> k;
	for (int i=1; i<=n; i++) {
		if (i%k==0) {
			std::cout << "* ";
		}
		else if (i==n) {
			std::cout << i;
		}
		else {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}
