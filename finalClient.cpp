/*Vance Agte*/
/*CS& 132*/
/*Jean Liu*/
/*Final Project*/

/*This program uses a Date class for specific dates. */

#include<iostream>
#include<iomanip>
#include"Date.h"
using namespace std;



int main() {

	const Date VBDay(10, 21, 1979);
	const Date jobStart(8, 17, 2003);
	const Date gradHS(6, 12, 1998);
	
	cout << "My birthday is " << VBDay.getMonth() << "/" << VBDay.getDay() << "/" << VBDay.getYear() << "." <<  endl;
	cout << "I graduated from high school on " << gradHS.getMonth() << "/" << gradHS.getDay() << "/" << gradHS.getYear() << "." << endl;
	cout << "I started my first real job on " << jobStart.getMonth() << "/" << jobStart.getDay() << "/" << jobStart.getYear() << "." << endl;
	   
	system("pause");
}// end main
