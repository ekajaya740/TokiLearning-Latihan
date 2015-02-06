#include <iostream>

void balik(int m, int n);

int c, d;

int main() {
	int m, n;
	std::cin >> m >> n;
	balik(m,n);
	std::cout << c << " " << d << std::endl;
	return 0;
}

void balik(int m, int n) {
	int temp = m;
	c = n;
	d = temp;
}
