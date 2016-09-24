#include<iostream>
#include<iostream>
#include<sstream> 
using namespace std;
struct Stu{
	string name;
	int age;
	string ID;
	int first, second, third, fourth;
};
int main()
{
	string strTemp;
	cin >> strTemp;
	Stu stuent;
	stringstream sStream;
	int pos = strTemp.find(',');
	int sum = 0;
	while( pos != string::npos)
	{
		strTemp = strTemp.replace(pos, 1, 1, ' ');
		pos = strTemp.find(',');
	}
	sStream << strTemp;
//	cout << sStream<<endl;
//	string  namestr = sStream;
//	stuent.name = namestr;
	sStream >> stuent.name;
	sStream >> stuent.age;
	string agestr = sStream.str();
	sStream >> stuent.ID;
	sStream >> stuent.first;
	sStream >> stuent.second;
	sStream >> stuent.third;
	sStream >> stuent.fourth;
	sum = stuent.first + stuent.second+stuent.third+stuent.fourth;
	cout << stuent.name <<","<< stuent.age <<","<< stuent.ID <<","<< sum/4;
}
