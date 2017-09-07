#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	float a,b,c,d,x,y,Realpart,Imaginarypart;
	
	cout << "\nQuadratic Equation is ax^2+bx+c=0";
            cout << "\nEnter the values of a,b,c";
	cin>>a>>b>>c;
	
	d=(b*b)-(4*a*c);
	
	if(d>0)
            {
            x=(-b+sqrt(d))/(2*a);
            y=(-b-sqrt(d))/(2*a);
		cout << "\nRoots are real and distinct. ";
		cout << " \nRoots are "<<x<<"and"<<y ;
            	
            }
	
	else if (d==0)
	{x=y=-b/(2*a) ;
		cout << "\nRoots are real and equal";
		cout << " Roots are"<<x<<"and"<<y ;
	}
	
	else
	{Realpart=-b/(2*a);
	Imaginarypart=sqrt(-d)/(2*a);
		cout << "\nRoots are complex and imaginary.";
		cout << " The first root is x="<<Realpart<<"+"<<Imaginarypart<<"i";
		cout << " The second root is y="<<Realpart<<"-"<<Imaginarypart<<"i";
	}
	
	return 0;
}
