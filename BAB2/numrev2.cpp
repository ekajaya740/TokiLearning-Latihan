#include<iostream>

using namespace std;

int main() {
	int t,angka,balik,satuan;
	cin>>t;
		for(int i=0; i<t;i++) {
			cin>>angka;
			balik=0;
			while(angka!=0) {
				satuan=angka%10;
				balik=(balik*10)+satuan;
				angka=angka/10;
				}
			cout<<balik<<endl;
		}
	return 0;
}
