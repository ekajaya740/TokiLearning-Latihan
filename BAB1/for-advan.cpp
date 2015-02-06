#include <iostream>

int main() {
	int n;
	std::cin >> n;
	for (int i=1; i<=n; i++) {
		if ( i%10==0 ) {
			continue;
		}
		else if ( i==93 ) {
			std::cout << "ERROR" << std::endl;
		}
		else {
			std::cout << i << std::endl;
		}
	}
	return 0;
}
