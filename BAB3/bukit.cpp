#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int angka, max, min;
	max=0;
	min=pow(10, 9);
	while (cin>>angka) {
		if (angka>max) max=angka;
		if (angka<min) min=angka;
	}
	cout << max-min << endl;
	return 0;
}
