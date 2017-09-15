#include <iostream>
using namespace std;

int main() {

	int n, i, j, count, r;

	cout << " enter any number: ";
	cin >> n;
	for (i = 0; i < 10; i++) 
	{
	cout << "The frequency of " << i << " = ";
	count = 0;
	
	for (j = n; j > 0; j = j / 10) 
	{
            r = j % 10;
            
            if (r == i) 
            {
            count++;
            }
            
	}
	cout << count << endl;
		
	}
        
	return 0;
}
