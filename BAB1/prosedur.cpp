#include <iostream>

void cekangka(int x);

int main() {
	int n;
	while (std::cin >> n) {
	cekangka(n);
	}
	return 0;
}

void cekangka(int x) {
	if (x<10) {std::cout << "satuan" << std::endl;}
	else if (x<100) {std::cout << "puluhan" << std::endl;}
	else if (x<1000) {std::cout << "ratusan" << std::endl;}
	else if (x<10000) {std::cout << "ribuan" << std::endl;}
	else if (x<100000) {std::cout << "puluhribuan" << std::endl;}
}
