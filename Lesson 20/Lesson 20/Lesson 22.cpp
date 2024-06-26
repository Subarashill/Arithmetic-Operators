#include <iostream>
using namespace std;

int main()
{

	short A = 10;
	short B = A++; // this case is different from the last lesson, Here (B) will only take the old value (A) and it will be 10 and (A) will increase 1

	cout << "B = " << B << endl;
	cout << "A = " << A << endl;

	B = ++A; // Here (A) will take the increment and (B) will take the new value 12

	cout << "B = " << B << endl;
	cout << "A = " << A << endl;




	return 0;
}