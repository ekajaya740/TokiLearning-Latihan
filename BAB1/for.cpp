#include <iostream>

int main() {
	int kandang, bebek, jumlah=0;
	std::cin >> kandang;
	for (int i=0; i < kandang; i++) {
		std::cin >> bebek;
		jumlah += bebek;
	}
	std::cout << jumlah << std::endl;
	return 0;
}
