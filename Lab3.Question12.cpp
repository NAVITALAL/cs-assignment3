#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int x;
	cin>>x;

	if((x==1)||(x==3)||(x==5)||(x==7)||(x==8)||(x==10)||(x==12))
	{
		cout<<" The month has 31 days.";
		
	}
	
	else if(x==2)
	{
		cout<<" The month has 28 days.";
		
	}
	
	else if((x==4)||(x==6)||(x==9)||(x==11))
	{
		cout<<" The month has 30 days";
		
	}
            else{cout<<"invalid number";}
            
	return 0;
}
