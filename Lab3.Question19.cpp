#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	int a,b,c,d,e,f,g;
	
	cout << "\nmarks in physics.";
            cout << "\nmarks in chemistry.";
            cout << "\nmarks in biology.";
            cout << "\nmarks in mathematics.";
            cout << "\nmarks in computer.";
	cin >>a>>b>>c>>d>>e;
	
	f=a+b+c+d+e;


	g=(f/5);
	
	if(g>=90)
            {
		cout << "\ngets grade A.";
            	
            }

	else if(g>=80)
	{
		cout << "\ngets grade B.";

	}
	else if(g>=70)
	{
		cout << "\ngets grade C.";
		
	}
	else if(g>=60)
	{
		cout << "\ngets grade D .";
	}
	else if(g>=40)
	{
		cout << "\ngets grade E.";
	}
	else
	{
		cout << "\ngets grade F.";
	}
	
	return 0;
}
