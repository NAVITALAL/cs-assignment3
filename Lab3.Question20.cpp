#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	float x,da,hra,gross;
	
	cout << " basic salary\n";
	cin >>x;
	
	
	if(x<=10000)
            {
            	da=x*0.8;
            	hra=x*0.2;
            	gross=x+da+hra;
		cout <<" gross salary ="<<gross;
            	
            }

	else if(x<=20000)
	{	da=x*0.9;
		hra=x*0.25;
		gross=x+da+hra;
		cout <<" gross salary ="<<gross;

	}

	else
	{	da=x*0.95;
		hra=x*0.3;
		gross=x+da+hra;
		cout << " gross salary="<<gross;
	}
	
	return 0;
}
