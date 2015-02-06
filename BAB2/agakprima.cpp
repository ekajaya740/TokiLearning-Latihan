#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, n, c=0;
	cin>>t;
	for (int i=0; i<t; i++) {
		cin>>n;
		for (int j=1; j<=sqrt(n); j++) {
			if (n%j==0) c++;
		}
		if (c>2) cout << "TIDAK" << endl;
		else cout << "YA" << endl;
		c=0;
	}
	return 0;
}
