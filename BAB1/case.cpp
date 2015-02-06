#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;	
	if ( a<10 ) {
		cout << "satuan" << endl;
		return 0;
	}
	else if ( a<100) {
		cout << "puluhan" << endl;
		return 0;
	}
        else if ( a<1000) {
                cout << "ratusan" << endl;
                return 0;
        }
	else if ( a<10000) {
                cout << "ribuan" << endl;
                return 0;
        }
        else if ( a<100000) {
                cout << "puluhribuan" << endl;
                return 0;
        }
	else {
		return 0;
	}
}
