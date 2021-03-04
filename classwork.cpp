#include<iostream>
using namespace std;
void iffer(int *p) {
	if (*p >= 0) {
		cout << *p << endl;
	}
	else if (*p < 0) {
		//*p = *p * 1 / -1;
		*p = *p - (*p + *p);
		cout << *p << endl;
	}
}
int main() {
	int* p = new int;
	cin >> *p;
	iffer(p);
	delete p;
	p = NULL;
	return 0;
}
