#include <iostream>
#include <cmath>

int main() {
	int n;
	std::cin >> n;
	for (int i=n; i>=1; i--) {
		if ( n%i==0 ) {
			std::cout << i << std::endl;
		}
		else {
			continue;
		}
	}
	return 0;
}
