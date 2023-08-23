#include<iostream>
using namespace std;
int main()
{
	int dob,temp,year;
	cout<<"enter the date of your birth"<<endl;
	cin>>temp;
	dob=temp;
    dob<<=4;
	cout<<"enter month of your birth"<<endl;
    cin>>temp;
    dob=dob|temp;
    dob<<=7;
    cout<<"enter year of birth"<<endl;
    cin>>temp;
    cout<<"enter current year"<<endl;
    cin>>year;
    temp=year-temp;
    dob=dob|temp;
    cout<<"stored value :"<<dob<<endl;
    cout<<"year :"<<(year-(dob&127))<<endl;
    cout<<"month :"<<((dob>>=7)&15)<<endl;
    cout<<"date :"<<(dob>>=4)<<endl;
    return 0;
    
	
}
