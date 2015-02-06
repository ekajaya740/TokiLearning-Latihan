#include<iostream>

using namespace std;

int main() {
	int A, B;
	char op;
	cin >> A >> op >> B;
	switch(op) {
		case '+' :
		cout << A+B << endl;
		break;
		case '-' :
		cout << A-B << endl;
		break;
		case '*' :
		cout << A*B << endl;
		break;
		case '>' :
		(A>B)? cout << "benar" << endl : cout << "salah" << endl;
		break;
		case '<' :
                (A<B)? cout << "benar" << endl : cout << "salah" << endl;
                break;
		case '=' :
                (A==B)? cout << "benar" << endl : cout << "salah" << endl;
                break;
	}
	return 0;
}
