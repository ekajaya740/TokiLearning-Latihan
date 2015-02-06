#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int pos=s1.find(s2);
	s1.erase(pos, s2.size());
	int sop=s1.find(s3);
	s1.insert(sop+s3.size(), s4);
	cout << s1 << endl;
	return 0;
}
