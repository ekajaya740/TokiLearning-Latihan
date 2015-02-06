#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int angka;
	bool cek;
	while (cin>>angka) {
		//cin >> angka;
		cek=true;
		if (angka>1) {
			for (int i=2; i<=sqrt(angka); i++) {
				if (angka%i==0) {
					cek=false;
				}
			}
		}
		else cek=false;
		//cout << "YA" << endl;
		(cek==true)? cout << "YA" << endl : cout << "TIDAK" << endl;
		//}
	}
	return 0;
}
