#include <iostream>

using namespace std;

int main() {
	int x;
	cin>>x;
	if ( x && (x & (x-1)) == 0 ) cout << "TRUE" << endl;
	else cout  << "FALSE" << endl;
	return 0;
}
