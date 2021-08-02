#include"Days.hpp"
int main () {
	int dey, mounth, year;
	cout<<"Enter pleas data\n ";
	cin>>dey>>mounth>>year;
	int mountcode=cas(mounth,dey); //Find code for mounth
	int p=6;			//Code for 21 century
	if(year%4==0&&mounth<=2) {     //Check leap year
		p-=1;
	}
	if(year<2000){   //change code for century
		p-=6;
	}
	if(year<1900||year>2099){
		cout<<"Error Data"<<endl;
		return 0;
	}
	if(year%4!=0&&mounth==2&&dey>28){
		cout<<"Error Data"<<endl;
		return 0;
	}
	int yearcode=(p+year%100+((year%100)/4))%7;	//Find year codes: year code = (6 + last two digits of the year + last two digits of the year / 4)% 7
	int orr=(dey+mountcode+yearcode)%7; 		 //find day from wek:  day of week = (day + month code + year code)% 7
	cout<<dey<<"."<<mounth<<"."<<year<<"\n";
	deys(orr);
	return 0;
}
