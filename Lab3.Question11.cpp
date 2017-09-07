#include <iostream>
using namespace std;

int main() {
	// your code goes +here
	
	int x;
	cin>>x;

	if(x==1){
		cout<<" is Sunday.";
		
	}
	else if(x==2)
	{
		cout<<" is Monday.";
		
	}
	else if(x==3)
	{
		cout<<" is Tuesday.";
		
	}
	else if(x==4)
	{
		cout<<" is Wednesday.";
		
	}
	else if(x==5)
	{
		cout<<" is Thursday.";
		
	}
	else if(x==6)
	{
		cout<<" is Friday.";
		
	}
	else if(x==7)
	{
		cout<<" is Saturday.";
		
	}
	else
	{
		cout<<"invalid number";
	}
	return 0;
}
