#include <iostream>

using namespace std;

int main() {
	int angka, t, rev=0;
	cin>>t;
	for (int i=0; i<t; i++) {
	cin>>angka;
	while(angka!=0){
		rev = rev*10;
		rev = rev+angka%10;
		rev = angka/10;
	}
	cout << rev << endl;
	}
	return 0;
}
