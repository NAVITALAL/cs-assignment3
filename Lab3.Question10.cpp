#include <iostream>
#include <cctype>
using namespace std;

int main() {
	// your code goes here
	
	char x;
	cin>>x;

	if(x>='a'&&x<='z'){cout<<x<<" is a lowercase alphabet.";}
	else{cout<<x<<"is an uppercase alphabet.";}
	
	return 0;
}
