#include <iostream>
#include <cctype>
using namespace std;

int main() {
	// your code goes here
	
	char x;
	cin>>x;

	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
	{
		cout<<x<<" is an alphabet.";
		
	}
	else if (x>='0'&&x<='9')
		{
				cout<<x<<"is a digit";
			
		}
		else
		{	cout<<x<<"is a special character.";
			
		}
	
	return 0;
}
