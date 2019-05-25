#include <iostream>

class Date{
	public:
		void Display(){
			std::cout << _year << "-" << _month
			   	<< "-" << _day << std::endl;
		}
		void Init(int year, int month, int day){
			_year = year;
			_month = month;
			_day = day;
		}
	private:
		int _year;
		int _month;
		int _day;
};

int main(){
	Date d1, d2;

	d1.Init(1995, 9, 16);
	d2.Init(2019, 5, 7);

	d1.Display();
	d2.Display();

	return 0;
}
