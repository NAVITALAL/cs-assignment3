#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	float x,y,z;

	cin>>x>>y>>z;
	
	if((x+y>z)||(y+z>x)||(x+z>y))
	{cout<<"\nit is a  triangle";}
	
	else
	{cout<<"\nit is not a triangle.";}
	
	return 0;
}
