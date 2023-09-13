#include<iostream>
using namespace std;
int main()
{
	int date,month, year, day,m,y;
	int curr_date,curr_month, curr_year;
	cout<<"enter your date of birth in dd/mm/yyyy format"<<endl;
	cin>>date>>month>>year;
	cout<<"enter today's  date in dd/mm/yyyy format"<<endl;
	cin>>curr_date>>curr_month>>curr_year;
	if(curr_date>=date)
	{
		day=curr_date-date;
		if(curr_month>=month)
		{
			m=curr_month-month;
			y=curr_year-year;
		}
		else
		{
			curr_month=curr_month+12;
			m=curr_month-month;
			curr_year=curr_year-1;
			y=curr_year-year;
		}
	}
	else
	{
		curr_date=curr_date+30;
		day=curr_date-date;
		curr_month=curr_month-1;
		if(curr_month>=month)
		{
			m=curr_month-month;
			y=curr_year-year;
		}
		else
		{
			curr_month=curr_month+12;
			m=curr_month-month;
			curr_year=curr_year-1;
			y=curr_year-year;
		}
	}
	cout<<"you are "<<day<<" day "<<m<<" month "<<y<<" year's old";
	return 0;
}
