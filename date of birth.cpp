#include<iostream>
using namespace std;
int main()
{
	int x,t,y;
	cout<<"enter the date"<<endl;
	cin>>t;
	x=t;
    x<<=4;
	cout<<"enter month"<<endl;
    cin>>t;
    x=x|t;
    x<<=7;
    cout<<"enter year of birth"<<endl;
    cin>>t;
    cout<<"enter current year"<<endl;
    cin>>y;
    t=y-t;
    x=x|t;
    cout<<"stored value :"<<x<<endl;
    cout<<"year :"<<(y-(x&127))<<endl;
    cout<<"month :"<<((x>>=7)&15)<<endl;
    cout<<"date :"<<(x>>=4)<<endl;
    return 0;
    
	
}
