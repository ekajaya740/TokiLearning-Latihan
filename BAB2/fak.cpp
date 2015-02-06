#include <cstdio>

int sum;

int faktorial(int n);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", faktorial(n));
	return 0;
}

int faktorial(int n) {
	int g;
	g = n/5;
	sum += g;
	if ( g%5==0 ) {
		faktorial(g);
	}
	return sum;
}
