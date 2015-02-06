#include <iostream>

using namespace std;

int main() {
	int trans[9];
	cin >> trans[0] >> trans[1] >> trans[2];
	cin >> trans[3] >> trans[4] >> trans[5];
	cin >> trans[6] >> trans[7] >> trans[8];
	for (int i=0; i<=2; i++) {
		int j=3;
		cout << trans[i+(0*j)] << " " << trans[i+j] << " " << trans[i+(2*j)] << endl;
	}
	return 0;
}
