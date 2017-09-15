#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n,x,product = 1;  
  
   
	cout << "Enter a Number\n";  
	cin>>n;
    
	while(n!= 0)
	{
	product*= n% 10;
      
	n = n/10;
	} 
  
	cout << "\nProduct of the digits are " << product;  
  
	return 0;
}
