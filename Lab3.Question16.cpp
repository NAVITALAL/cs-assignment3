#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	float x,y,z;
	
	cin>>x>>y>>z;
	
	if((x==y)&&(y==z))
	{cout<<" it is an equilateral triangle.";}
	
	else if ((x==y)||(x==z)||(y==z))
	{cout<<"it is an isosceles triangle";}
	
	else
	{cout<<" it is a scalene triangle.";}
	
	return 0;
}
