#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	float x,y,z;
	
	cout << "\nEnter the cost price";
            cout << "\nEnter the selling price";
	cin>>x>>y;
	
	z=x-y;
	
	if(z>0)
            {
		cout << "\nhas a profit.";
            	
            }

	else
	{
		cout << "\nhas a loss.";

	}
	
	return 0;
}
