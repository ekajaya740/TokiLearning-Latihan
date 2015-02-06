#include <iostream>

using namespace std;

int main() {
	string angka;
	int t;
	cin >> t;
	for (int o=0; o<t; o++) {
		cin >> angka;
		int n=angka.size(), sw=0;
		for (int i=n-1; i>=0; i--) {
			if (sw==0) {
				if ( angka.at(i)=='0') continue;
				else {
					cout << angka.at(i);
					sw=1;
				}
			}
			else cout << angka.at(i);
		}
	cout << endl;
	}
	return 0;
}
