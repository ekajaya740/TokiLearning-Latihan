#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int x = a-c;
	if (x<0) { x=x*(-1); }
	int y = b-d;
	if (y<0) { y=y*(-1); }
	cout << x + y << endl;
	return 0;
}
