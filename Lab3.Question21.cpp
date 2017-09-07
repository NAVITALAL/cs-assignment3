#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	float x,y;
	
	cout<<"Number of units\n";
	cout<<"Bill amount\n";
	
	cin>>x;
	
	if(x<=50)
	{	y=x*0.5;
		cout << " The amount is Rs."<<y<<endl;	
	}
	else if (x<=150)
	{
		y= (25 + ((x-50)*0.75))*1.2;
		cout << "The amount is Rs."<<y<<endl;
	
	}
	else if (x<=250)
	{
		y=(100 +((x-150)*1.2))*1.2;
		cout << "The amount of Rs."<<y<<endl;
	}
	else 
	{
		y=(220 + ((x-250)*1.5))*1.2;
		cout << "The amount of Rs."<<y<<endl;
	}
	
	return 0;
}
