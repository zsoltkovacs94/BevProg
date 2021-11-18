#include "../std_lib_facilities.h"

const vector<string> months = 
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

enum class Month {
	jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}

class Date {
	int year;
	Month month;
	int day;
public:
	class Invalid {};
	Date(int y, Month m, int d): year(y), month(m), day(d) { if (!is_valid()) throw Invalid {}; }
	bool is_valid();
	void add_day(int n);
    Month get_month() const { return month; }
    int get_day() const { return day; }
    int get_year() const { return year; }
};

bool Date::is_valid()
{
	if (year < 0 || day < 1 || day > 31) return false;
	return true;
}

void Date::add_day(int n)
{
	day += n;
	if (day > 31) 
	{
		++month;
		day -= 31;
		if (month == Month::jan)
		{
			year++;
		}
	}
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.get_year()
              << ',' << d.get_month()
              << ',' << d.get_day() << ')';
}

int main()
{
	try {
		Date today{1978, Month::jun, 25};
		Date tomorrow{today};
		tomorrow.add_day(1);
		cout << "Today: " << today << "; ";
		cout << "Tomorrow: " << tomorrow << '\n';
		Date test{2004,Month::sep,-5};
		cout << "Test: " << test << '\n';
		return 0;
	} catch (Date::Invalid) {
	cout << "Error: Invalid date\n";
	return 1; 
	} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 2;
	}	
}
