#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int day, month, year;

public:
	Date()
	{ day = 1;
	month = 1;
	year = 1900;
	};
	Date(int d, int m, int y);
	void setDate(int d, int m, int y);
	//void setDay(int d);
	//void setMonth(int m);
	//void setYear(int y);
	int getDay()const;
	int getMonth()const;
	int getYear()const;
			}; //end class date header

#endif // !DATE_h
