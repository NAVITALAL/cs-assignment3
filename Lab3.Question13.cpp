#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int x,R2000,R500,R100,R50,R20,R10,R5,R2,R1;

	cin>>x;
	
	R2000=x/2000;
	x = x % 2000;
	
	R500=x/500;
	x =x%500;
	
	R100=x/100;
	x = x%100;
	
	R50=x/50;
	x = x%50;
	
	R10=x/10;
	x = x%10;
	
	R5=x/5;
	x = x%5;
	
	R2=x/2;
	x = x%2;
	
	R1=x;
	
	cout << "The number of 2000 is "<<R2000<<endl;
	cout << "The number of 500 is "<<R500<<endl;
	cout << "The number of 100 is "<<R100<<endl;
	cout << "The number of 50 is "<<R50<<endl;
	cout << "The number of 20 is "<<R20<<endl;
	cout << "The number of 10 is "<<R10<<endl;
	cout << "The number of 5 is "<<R5<<endl;
	cout << "The number of 2 is "<<R2<<endl;
	cout << "The number of 1 is "<<R1<<endl;
	
	
	return 0;
}
