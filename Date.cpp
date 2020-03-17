#include<iostream>
#include<string>
#include"Date.h"
using namespace std;

Date::Date(int m, int d, int y)
{
	this->day = d;
	this->month = m;
	this->year = y;
}//end Date constructor

void Date::setDate(int m, int d, int y) 
{
	this->day = d;
	this->month = m;
	this->year = y;
}// end setDate

//void Date::setDay(int d)
//{
//	this->day = d;
//}// end setDay
//
//void Date::setMonth(int m)
//{
//	this->month = m;
//}// end setMonth
//
//void Date::setYear(int y)
//{
//	this->year = y;
//}// end setYear
//
int Date::getDay()const 
{
	return day;
}//end getDay

int Date::getMonth()const  {
	return month;
}//end getMonth

int Date::getYear()const
{
	return year;
}//end getYear


