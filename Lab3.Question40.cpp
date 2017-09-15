#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int num, a,w,x,y,z;
	
	cout << "Enter a number: \n";
	cin >> num;
	
	a=num/1000;
	
	if (a==1){cout << "one thousand";}
	else if (a==2){cout << "two thousand";}
	else if (a==3){cout << "three thousand";}
	else if (a==4){cout << "four thousand";}
	else if (a==5){cout << "five thousand";}
	else if (a==6){cout << "six thousand";}
	else if (a==7){cout << "seven thousand";}
	else if (a==8){cout << "eight thousand";}
	else if (a==9){cout <<"nine thousand";}

	y=num%1000;
	
	if (y>=100&&y<200){cout << " one hundred";}
	else if (y>=200&&y<300){cout << " two hundred";}
	else if (y>=300&&y<400){cout << " three hundred";}
	else if (y>=400&&y<500){cout << " four hundred";}
	else if (y>=500&&y<600){cout << " five hundred";}
	else if (y>=600&&y<700){cout << " six hundred";}
	else if (y>=700&&y<800){cout << " seven hundred";}
	else if (y>=800&&y<900){cout << " eight hundred";}
	else if (y>=900&&y<1000){cout << " nine hundred";}
	
	z=num%100;
	
	if (z>=20&&z<30){cout <<  " twenty " ;}
	else if (z>=30&&z<40){cout << " thirty " ;}
	else if (z>=40&&z<50){cout <<  " forty " ;}
	else if (z>=50&&z<60){cout <<  " fifty " ;}
	else if (z>=60&&z<70){cout <<  " sixty " ;}
	else if (z>=70&&z<80){cout <<  " seventy " ;}
	else if (z>=80&&z<90){cout <<  " eighty " ;}
	else if (z>=90&&z<100){cout <<  " ninety " ;}
   
	if (x<10&&x>20)

	x=z%10;

	if (x==1){cout << " one " ;}
	else if (x==2){cout << " two " ;}
	else if (x==3){cout << " three " ;}
	else if (x==4){cout << " four " ;}
	else if (x==5){cout << " five " ;}
	else if (x==6){cout << " six " ;}
	else if (x==7){cout << " seven " ;}
	else if (x==8){cout << " eight " ;}
	else if (x==9){cout << " nine " ;}
   
	if (x>10&&x<20)
  
	w=num;

	if (w==10){cout << " ten" ;}
	else if (w==11){cout << " eleven " ;}
	else if (w==12){cout << " twelve " ;}
	else if (w==13){cout << " thirteen " ;}
	else if (w==14){cout << " fourteen " ;}
	else if (w==15){cout << " fifteen " ;}
	else if (w==16){cout << " sixteen " ;}
	else if (w==17){cout << " seventeen " ;}
	else if (w==18){cout << " eighteen " ;}
	else if (w==19){cout << " nineteen " ;}


	return 0;
}
