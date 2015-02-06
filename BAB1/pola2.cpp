#include <iostream>

int main() {
	int n, k=0;
	std::cin >> n;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			int d=k%10;
			std::cout << d;
			k++;
		}
		std::cout << std::endl;
	}
	return 0;
}
