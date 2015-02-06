#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	double angka, max=-1000001, min=1000001,sum=0;
	int t;
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> angka;
		if (angka>max) max = angka;
		if (angka<min) min = angka;
		sum += angka;
	}
	printf("%.2lf %.2lf %.2lf\n", min, max, sum/t);
	return 0;
}
