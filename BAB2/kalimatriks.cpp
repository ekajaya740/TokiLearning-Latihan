#include <iostream>

int main() {
	int x, y, a, b, mata[75][75]={(0,0)}, matb[75][75]={(0,0)};
	int matc[75][75]={(0,0)};
	std::cin >> y >> x;
	for (int i=0; i<y; i++) {
		for (int j=0; j<x; j++) {
			scanf("%d", &mata[i][j]);
		}
	}
	std::cin >> b >> a;
	for (int k=0; k<b; i++) {
                for (int l=0; l<a; j++) {
                        scanf("%d", &mata[k][l]);
                }
        }
	

