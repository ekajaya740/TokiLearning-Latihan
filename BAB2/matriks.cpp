#include <iostream>

int main() {
	int y, x, mat[100][100]={(0,0)};
	std::cin >> y >> x;
	for (int i=0; i<y; i++){
		for (int j=0; j<x; j++) {
			std::cin >> mat[i][j];
		}
	}
	for (int n=0; n<x; n++) {
		for (int m=y-1; m>=0; m--) {
			std::cout << mat[m][n];
			if ( m!=0 ) std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
