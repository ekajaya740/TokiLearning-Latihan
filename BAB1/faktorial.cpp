#include <iostream>

int fak(int x);

int main() {
	int n;
	std::cin >> n;
	if (n>10) {
		std::cout << "ditolak" << std::endl;
		return 0;
	}
	std::cout << fak(n) << std::endl;
	return 0;
}

int fak(int x) {
	if (x==0 || x==1) {
		return 1;
	}
	int sum=1;
	sum = x * fak(x-1);
	return sum;
}
