#include <cstdio>

int main() {
	int n, fq[2000]={0}, max=0, ans, l;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &l);
		fq[l]++;
	}
	for (int j=1; j<=1000; j++) {
		if (fq[j]>=max) {
			max = fq[j];
			ans = j;
		}
	}
	printf("%d\n", ans);
	return 0;
}
