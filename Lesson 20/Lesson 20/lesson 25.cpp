#include <iostream>
using namespace std;

int main() {

	bool A = 1, B = 0;

	cout << (A && B) << endl;
	cout << (A || B) << endl;
	cout << !A << endl;
	cout << !B << endl;
	cout << !(A && B) << endl;
	cout << !(A || B) << endl;
	cout << endl << endl;
	bool Result;

	Result = !(5 > 6 || 7 == 7) && !(1 || 0);

	cout << Result << endl;

	return 0;
}