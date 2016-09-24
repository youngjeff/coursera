#include<iostream>
#include<string>
#include<cstring>
#include <iomanip>
using namespace std;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void is_rui(int year)
{
	if(year % 400 == 0)
	{
		mon[2]=29;
	}
	else if(year % 4 == 0 && year % 100 != 0)
	{
		mon[2]=29;
	}
	else{
		mon[2]=28;
	}
	
}
int main()
{
	string str;
	cin >> str;
	int year = (str[0]-'0')*1000+(str[1]-'0')*100+(str[2]-'0')*10+(str[3]-'0');
	int month = (str[5]-'0')*10+(str[6]-'0');
	int day = (str[8]-'0')*10+(str[9]-'0');
	is_rui(year);
	if (day+1 > mon[month])
	{
		day = 1;
		month++;
		if(month>12)
		{
			month = 1;
			year++;
		}
	}
	else{
		day++;
	}
	cout<<year<<'-';
	if(month<10)
	{
		cout<<'0'<<month<<'-';
	}
	else{
		cout<<month<<'-';
	}
	if(day<10)
	{
		cout<<'0'<<day<<endl;
	}
	else{
		cout<<day<<endl;
	}
}
