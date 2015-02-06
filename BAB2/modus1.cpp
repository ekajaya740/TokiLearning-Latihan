#include <cstdio>

int main() {
	int n, fq[1000]={0}, max=0, ans, l;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &l);
		fq[l]++;
	}
	for (int j=999; j>=0; j--) {
		if (fq[j]>max) {
			max = fq[j];
			ans = j;
			//printf("%d", fq[j]);
		}
	}
	printf("%d\n", ans);
	return 0;
}
