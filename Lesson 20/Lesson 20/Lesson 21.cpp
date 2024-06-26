#include <iostream>
using namespace std;

int main() 
{

	short A, B;

	cout << "Enter the first number: " << endl;
	cin >> A;

	cout << "Enter the second number: " << endl;
	cin >> B;

	A++;// this is Increment and it's add 1 to the value and you can write it as ++A too (in this case only!)
	--B;// this is Decrement and it's take 1 from the value and you can write it as B-- too (in this case only!)

	cout << "the first number after increment: " << A << endl << " the second number after decrement :" << B << endl;







	return 0;
}