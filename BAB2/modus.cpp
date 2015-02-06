#include <cstdio>

void cekmod(int n, int data[]);

int main() {
	int n,data[1000],i=0;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &data[i]);
	}
	cekmod(n,data);
	return 0;
}

void cekmod(int n, int data[]) {
	int compr[1000], jumlahdata, max=0;
	for (int i=0; i<n; i++) {
		jumlahdata=0;
		for (int j=i; j<n; j++) {
			if (data[i]==data[j]) {
				jumlahdata++;
			}
		}
	compr[i]=jumlahdata;
	}
	for (int t=0; t<n; t++) {
		if (compr[t]>max) {
			max=compr[t];
		}
	}
	//mencari data mana yang paling banyak muncul dan lebih besar mana
	int maxMode;
	for (int u=0; u<n; u++) {
		if (max==compr[u] && data[u]>maxMode) {
			maxMode=data[u];
		}
	}
	printf("%d\n", maxMode);
	return;
}
