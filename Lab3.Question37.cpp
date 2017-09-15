#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n, reversedNumber = 0, x;

	cout << "Enter an number";
	cin >> n;

	while(n != 0)
	{
	x = n%10;
	reversedNumber = reversedNumber*10 + x;
	n /= 10;
	}

	cout << "\nThe Reversed number is " << reversedNumber;
	return 0;
}
