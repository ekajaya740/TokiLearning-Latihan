#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if (a>0) {
		cout << "positif" << endl;
		return 0;
	}
	else if (a==0) {
		cout << "nol" << endl;
		return 0;
	}
	else {
		cout << "negatif" << endl;
		return 0;
	}
}
